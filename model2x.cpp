#include "model2x.h"

Model2x::Model2x(double _xmin, double _xmax, double _a, double _b, double _u0, double _v0, double _h0, int _Nmax, bool _reg, std::function<std::pair<double, double>(double, double, double, double, double)> _f, double _eps)
{
	xmin = _xmin;
	xmax = _xmax;
	a = _a;
	b = _b;
	u0 = _u0;
	v0 = _v0;
	h0 = _h0;
	f = _f;
	Nmax = _Nmax;
	reg = _reg;
	n = 0;
	eps = _eps;
	x.resize(Nmax);
	u.resize(Nmax);
	v.resize(Nmax);
	h.resize(Nmax);
	le.resize(Nmax);
	u2.resize(Nmax);
	c1.resize(Nmax);
	c2.resize(Nmax);
}

bool Model2x::solve()
{
	solved = false;
	n = 0;
	x[n] = xmin;
	u[n] = u0;
	v[n] = v0;
	h[n] = h0;
	u2[n] = v0;
	c1[n] = 0;
	c2[n] = 0;
	while (x[n] < xmax && n < Nmax)
	{
		if (n > 0)
		{
			c1[n] = c1[n - 1];
			c2[n] = c2[n - 1];
		}

		if (x[n] + h[n] > xmax)
		{
			h[n] = x[n] + h[n] - b;
		}
		double next_x = x[n] + h[n];
		std::pair<double, double> next_p = RK4_iter(x[n], u[n], v[n], h[n]);
		double next_u = next_p.first;
		double next_v = next_p.second;
		if (reg)
		{
			std::pair<double, double> next_p1_2 = RK4_iter(x[n], u[n], v[n], h[n] / 2);
			double next_u1_2 = next_p1_2.first;
			double next_v1_2 = next_p1_2.second;
			std::pair<double, double> next_p2 = RK4_iter(x[n] + h[n] / 2, next_u1_2, next_v1_2, h[n] / 2);
			double next_u2 = next_p2.first;
			double next_v2 = next_p2.second;
			double S = abs(next_v2 - next_v);
			le[n + 1] = S / 15;
			if (S >= eps / 32 && S <= eps)
			{
				v[n + 1] = next_v;
				u[n + 1] = next_u;
				h[n + 1] = h[n];
			}
			else if (S < eps / 32)
			{
				v[n + 1] = next_v;
				u[n + 1] = next_u;
				h[n + 1] = 2 * h[n];
				c2[n] += 1;
			}
			else
			{
				h[n] /= 2;
				c1[n] += 1;
				continue;
			}
			u2[n + 1] = next_u2;
			x[n + 1] = next_x;
		}
		else
		{
			x[n + 1] = next_x;
			u[n + 1] = next_u;
			v[n + 1] = next_v;
			h[n + 1] = h[n];
		}
		n++;
	}
	solved = true;
	return true;
}

std::pair<double, double> Model2x::RK4_iter(double x, double u, double v, double h)
{
	std::pair<double, double> k1 = f(x, u, v, a, b);
	std::pair<double, double> k2= f(x + h / 2, u + h / 2 * k1.first, v + h / 2 * k1.second, a, b);
	std::pair<double, double> k3= f(x + h / 2, u + h / 2 * k2.first, v + h / 2 * k2.second, a, b);
	std::pair<double, double > k4= f(x + h, u + h * k3.first, v + h * k3.second, a, b);
	return std::pair<double, double> (v + h / 6 * (k1.first + 2 * k2.first + 2 * k3.first + k4.first), v + h / 6 * (k1.second + 2 * k2.second + 2 * k3.second + k4.second));
}

vector<vector<double>> Model2x::get_ans()
{
	return { x, u, v, u2, le, h, c1, c2 };
}

std::pair<double, double> g(double x, double u, double v, double a, double b)
{
		return std::pair<double, double>(v, -a * v - b * sin(u));
}
