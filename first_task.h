#pragma once
#include <vector>
#include <math.h>

using std::vector;



class first_task
{
private:
	vector<double> x;
	vector<double> v;
	vector<double> v2;
	vector<double> le;
	vector<double> h;
	vector<double> c1;
	vector<double> c2;
	int Nmax;
	double a, b, eps, v0, h0;
	bool solved, reg;
public:
	int n;
	first_task(double _a, double _b, double _v0, double _h0, int _Nmax, bool _reg, double _eps = 0.00001);

	bool solve();
	double f(double x, double v);
	
	vector<vector<double> > get_ans();
	~first_task() {};
};