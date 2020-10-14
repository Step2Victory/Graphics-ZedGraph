#pragma once
#include <vector>
#include <math.h>
#include <functional>

using std::vector;


double f_test(double x, double v);
double f(double x, double v);

class Model
{
private:
	vector<double> x;
	vector<double> v;
	vector<double> v2;
	vector<double> le;
	vector<double> h;
	vector<double> c1;
	vector<double> c2;
	std::function<double(double, double)>f;
	int Nmax;
	double a, b, eps, v0, h0;
	bool solved, reg;
	
public:
	int n;
	Model(double _a, double _b, double _v0, double _h0, int _Nmax, bool _reg, std::function<double(double, double)>_f = f_test, double _eps = 0.00001);
	bool solve();
	double RK4_iter(double x, double v, double h);
	vector<vector<double> > get_ans();
	~Model() {};
};