#include <iostream>
using namespace std;
int addTwoNumber(int a, int b)
{
    int sum = a + b;
    return sum;
}
int main()
{
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "The sum of the two numbers is: " << addTwoNumber(a, b) << endl;
}