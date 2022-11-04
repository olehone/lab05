#include <iostream>
#include <cmath>
using namespace std;
double h(const double x);
int main()
{
	double qp, qk, z;
	int n;
	cout << "qp = "; cin >> qp;
	cout << "qk = "; cin >> qk;
	cout << "n = "; cin >> n;
	double qg = (qk - qp) / n;
	double q = qp;
	while (q <= qk)
	{
		z = h(q+1) + h(q*q+1)+h(q*q)*h(q*q);
		cout << q << " " << z << endl;
		q += qg;
	}
	return 0;
}
double h(const double x)
{
	if (abs(x) >= 1)
		return (cos(x)+1)/(cos(x)*cos(1)+1);
	else
	{
		double S = 0;
		int i = 0;
		double a = 1;
		S = a;
		do
		{
			i++;
			double R = (x*x)/(4*i*i - 2*i);
			a *= R;
			S += a;
		} while (i < 6);
		return (1/cos(x)) * S;
	}
}