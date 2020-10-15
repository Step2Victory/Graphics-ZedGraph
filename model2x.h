#pragma once
#include "model.h"


std::pair<double, double> g(double x, double u, double v, double a, double b);


class Model2x
{
	vector<double> x;
	vector<double> v;
	vector<double> u;
	vector<double> u2;
	vector<double> le;
	vector<double> h;
	vector<double> c1;
	vector<double> c2;
	std::function<std::pair<double, double>(double, double, double, double, double)>f;
	int Nmax;
	double a, b, eps, u0, v0, h0, xmin, xmax;
	bool solved, reg;

public:
	int n;
	Model2x(double _xmin, double _xmax, double _a, double _b, double _u0, double _v0, double _h0, int _Nmax, bool _reg, std::function<std::pair<double, double>(double, double, double, double, double)>_f, double _eps = 0.00001);
	bool solve();
	std::pair<double, double> RK4_iter(double x, double u, double v, double h);
	vector<vector<double> > get_ans();
	~Model2x() {};
};