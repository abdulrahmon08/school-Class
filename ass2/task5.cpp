#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Input a number: " << endl;
    cin >> number;
    if (number < 0)
    {
        cout << "Negative";
    }
    else
    {
        cout << "Positive";
    }
}