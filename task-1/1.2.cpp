#include <iostream>
#include <cmath>
using namespace std;

double convert(const double length);

int main ()
{

double length;
cout << "Please Input value in Centimeters : ";
cin >> length;

double newLength = convert(length);

cout << "Length = " << newLength << " inches";

return 0;
}

double convert(const double length)
{
    return length / 2.5;
}