#include<iostream>
#include<cmath>

using namespace std;

/**
 * \brief calculate function according to given formula.
 * \param x first argument function .
 * \param y second argument function .
 * \param z third argument function .
 * \return function value .
*/
const double getA(const double x, const double y, const double z);
/**
 * \brief calculate function according to given formula.
 * \param x first argument function .
 * \param y second argument function .
 * \param z third argument function .
 * \return function value .
*/
const double getB(const double x, const double y, const double z);

/**
*\brief entry point in progrram .
*\return returne 0 if successful .
*/
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

const double getA(const double x, const double y, const double z)
{
	return (pow(z,2 * x)+pow(y,-x)*cos(z+y)*x)/(x+1);
}
const double getB(const double x,const  double y,const double z)
{
	return sqrt(pow(x, 2)+y)-pow(y, 2)*(sin((x +z)/x)*sin((x+z)/x)*sin((x+z)/x));
}