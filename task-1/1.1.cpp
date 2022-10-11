#include<iostream>
#include<cmath>

using namespace std;

/**
 * \brief 
 * \param x 
 * \param y 
 * \param z
*/
const double getA(const double x, double y, double z);

const double getB(double x, double y, double z)
{
	return sqrt(pow(x, 2)+y)-pow(y, 2)*(sin((x +z)/x)*sin((x+z)/x)*sin((x+z)/x));
}

int main()
{
	const double x = 0.61;
	const double y = 0.9;
	const double z = 0.3;

	cout << " x = " << x << " y = " << y << " z = " << z << endl;

	const auto a = getA(x, y, z);
	const auto b = getB(x, y, z);
	cout << " a = " << a << " b = " << b << endl;

	return 0;
}

const double getA(const double x, double y, double z)
{
	return (pow(z,2 * x)+pow(y,-x)*cos(z+y)*x)/(x+1);
}
