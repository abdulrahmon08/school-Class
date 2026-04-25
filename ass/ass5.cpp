#include <iostream>
using namespace std;
int main()
{
    string firstName, lastName, fullName;
    cout << "Input your first name: " << endl;
    cin >> firstName;
    cout << "Input your last name: " << endl;
    cin >> lastName;
    fullName = firstName + " " + lastName;
    cout << "Your full name is: " << fullName << endl;
    return 0;
}