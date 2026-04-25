#include <iostream>
using namespace std;
int main()
{
    char signal;
    cout << "Enter the signal (e.g. R or r, Y or y, G or g" << endl;
    cin >> signal;
    switch (signal)
    {
    case 'R':
    case 'r':
        cout << "STOP!";
        break;

    case 'Y':
    case 'y':
        cout << "CAUTION!";
        break;

    case 'G':
    case 'g':
        cout << "GO!";
        break;
    }
    return 0;
}
