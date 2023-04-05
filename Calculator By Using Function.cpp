#include <iostream>
using namespace std;

//function for addition
float add(float num1, float num2)
{
    return num1 + num2;
}

//function for subtraction
float subtract(float num1, float num2)
{
    return num1 - num2;
}

//function for multiplication
float multiply(float num1, float num2)
{
    return num1 * num2;
}

//function for division
float divide(float num1, float num2)
{
    if (num2 == 0)
    {
        cout << "Error: division by zero" << endl;
        return 0;
    }
    else
    {
        return num1 / num2;
    }
}

int main()
{
    float num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Addition = " << add(num1, num2) << endl;
    cout << "Subtraction = " << subtract(num1, num2) << endl;
    cout << "Multiplication = " << multiply(num1, num2) << endl;
    cout << "Division = " << divide(num1, num2) << endl;
    return 0;
}
