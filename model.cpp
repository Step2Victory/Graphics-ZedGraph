#include "model.h"

Model::Model(double _a, double _b, double _v0, double _h0, int _Nmax, bool _reg, std::function<double(double, double)>_f, double _eps)
{
	a = _a;
	b = _b;
	v0 = _v0;
	h0 = _h0;
	Nmax = _Nmax;
	reg = _reg;
	eps = _eps;
	n = 0;
	solved = false;
	x.resize(Nmax + 1);
	v.resize(Nmax + 1);
	v2.resize(Nmax + 1);
	h.resize(Nmax + 1);
	c1.resize(Nmax + 1);
	c2.resize(Nmax + 1);
	le.resize(Nmax + 1);
	f = _f;
}

bool Model::solve()
{
	solved = false;
	n = 0;
	x[n] = a;
	v[n] = v0;
	h[n] = h0;
	v2[n] = v0;
	c1[n] = 0;
	c2[n] = 0;
	while (x[n] < b && n < Nmax)
	{
		if (n > 0)
		{
			c1[n] = c1[n - 1];
			c2[n] = c2[n - 1];
		}
		
		if (x[n] + h[n] > b)
		{
			h[n] = x[n] + h[n] - b;
		}
		double next_x = x[n] + h[n];
		double next_v = RK4_iter(x[n], v[n], h[n]);
		if (reg)
		{
			double next_V1_2 = RK4_iter(x[n], v[n], h[n] / 2);
			double next_V2 = RK4_iter(x[n] + h[n] / 2, next_V1_2, h[n] / 2);
			double S = abs(next_V2 - next_v);
			le[n + 1] = S / 15;
			if (S >= eps / 32 && S <= eps)
			{
				v[n + 1] = next_v;
				h[n + 1] = h[n];
			}
			else if (S < eps / 32)
			{
				v[n + 1] = next_v;
				h[n + 1] = 2 * h[n];
				c2[n] += 1;
			}
			else
			{
				h[n] /= 2;
				c1[n] += 1;
				continue;
			}
			v2[n + 1] = next_V2;
			x[n + 1] = next_x;
		}
		else
		{
			x[n + 1] = next_x;
			v[n + 1] = next_v;
			h[n + 1] = h[n];
		}
		n++;
	}
	solved = true;
	return true;
}

double f_test(double x, double v)
{
	return v;
}

double f(double x, double v)
{
	return x / (1 + x * x);
}

double Model::RK4_iter(double x, double v, double h)
{
	double k1 = f(x, v);
	double k2 = f(x + h / 2, v + h / 2 * k1);
	double k3 = f(x + h / 2, v + h / 2 * k2);
	double k4 = f(x + h, v + h * k3);
	return v + h / 6 * (k1 + 2 * k2 + 2 * k3 + k4);
}

vector<vector<double>> Model::get_ans()
{
	return { x, v, v2, le, h, c1, c2 };
}





