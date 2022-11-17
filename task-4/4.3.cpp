#include <iostream>
#include <ctime>
#include <random>
using namespace std;

size_t get_size(const string& massage );

int** getArray(const size_t rows, const size_t columns);

int** getUserArray(const size_t rows, const size_t columns);

void printArray(int** array, const size_t rows, const size_t  columns);

enum class userInput
{
    USER_INPUT,
    RANDOM_INPUT
};

int main()
{
    size_t rows =get_size("Enter the number of rows in the array: ");

    size_t columns =  get_size("Enter the number of array columns: ");

cout << "\n";
    cout << "Enter a number corresponding to your desire to populate the array:\n" << "\n"
    << static_cast<int>(userInput::USER_INPUT) << " - you fill the array manually.\n"
    << static_cast<int>(userInput::RANDOM_INPUT) << " - fills an array with random numbers.\n\n";

     int input = 0;
    cout << "Your array filling option selection number: ";
    cin >> input;
    const auto choice = static_cast<userInput>(input);
    cout << "\n";

int** array = nullptr;

  switch(choice)
    {
        case userInput::USER_INPUT:
        {
            array = getUserArray(rows, columns);
            
            break;
        }
    }  
    cout << "initial array:" << "\n" << "\n";
            
    printArray(array, rows, columns);
            
return 0;

}
size_t get_size(const string& message)
{
    size_t size;
    
    cout << message;
    cin >> size;

    return static_cast<size_t>(size);
}
int** getArray(const size_t rows, const size_t columns)
{
    int** array = new int* [rows];
    
    for (size_t i = 0; i < rows; i++)
    {
        array[i] = new int[columns];
    }
    return array;
}
int** getUserArray(const size_t rows, const size_t columns)
{
    int** array = getArray(rows, columns);
    
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < columns; j++)
        {
            cin >> array[i][j];
        }
        cout << "\n";
    }
    return array;
}

void printArray(int** array, const size_t rows, const size_t  columns)
{
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < columns; j++)
        {

            cout << array[i][j] << "\t";
        }
        cout << "\n" << "\n";
    }
}
