#include<iostream>

using namespace std;

int getNumber(const string& message);

void croissantNumber(const int size, const int a, const int b, const int c);

int main()
{
const int a = getNumber("Enter value a = ");
const int b = getNumber("\nEnter value b = ");
const int c = getNumber("\nEnter value c = ");
const int size = 3;

cout << "\nThe values in ascending order are as follows:\n";
croissantNumber(size, a, b, c);

return 0;
}

int getNumber(const string& message)
{
cout<< message;
int number = 0;
cin>> number;

return number;
}

void croissantNumber(const int size, const int a, const int b, const int c)
{
int arr[size] = {a, b, c};
int max = 0;

for (int i = 0; i < size; i++)
{
for(int j = i; j < size; j++)
{
if (arr[j] <= arr[i])
{
max = arr[i];
arr[i]= arr[j];
arr[j] = max;
}
}
}

for (size_t k = 0; k < size; k++)
{
cout << arr[k] << "\n";
}
}