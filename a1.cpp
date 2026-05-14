#include <iostream>
using namespace std;
int area_of_square(int l)
{
    return l * l;
}
int area_of_rec(int l, int b)
{
    return l * b;
}
int area_of_circle(int r)
{
    return 3.142 * (r * r);
}
int main()
{
    int score[5] = {7, 10, 8, 4, 17};
    int highest = score[0];
    for (int i = 0; i < 5; i++)
    {
        if (score[i] > highest)
        {
            highest = score[i];
        }
    }
    cout << "Highest score is " << highest << endl;

    for (int i = 1; i <= 50; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            cout << "FizzBuzz" << endl;
        }
        else if (i % 3 == 0)
        {
            cout << "Fizz" << endl;
        }
        else if (i % 5 == 0)
        {
            cout << "Buzz" << endl;
        }
        else
        {
            cout << i << endl;
        }
    }
    cout << "Area of square of length 2 is: " << area_of_square(2) << endl;
    cout << "Area of rectangle of length 8 and width 4 is " << area_of_rec(8, 4) << endl;
    cout << "Area of circle of radius 4 is " << area_of_circle(4) << endl;

    char signal;
    cout << "Input your signal from R,Y and G" << endl;
    cin >> signal;
    char input= tolower(signal);
    switch (signal)
    {
    case 'r':
        cout << "Stop" <<endl;
        break;
    case 'y':
        cout << "Caution"<<endl;
        break;
    case 'g':
        cout << "Go!"<<endl;
        break;
    default:
    	cout<< "Invalid signal"<<endl;
        break;
    }
    
    string firstName, lastName, fullName;
    cout<< "Enter your first name: "<<endl;
    cin>> firstName;
    cout<< "Enter your last name: "<<endl;
    cin>> lastName;

    fullName= firstName+" "+lastName;
    cout<< "The Full Name is "<< fullName <<endl;
    return 0;
}
