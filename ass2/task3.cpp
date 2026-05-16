#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Input a number that you want to calculate the sum of it: " << endl;
    cin >> n;
    int a;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum << endl;
    return 0;
}
