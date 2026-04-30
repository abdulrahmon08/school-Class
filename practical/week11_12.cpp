#include <iostream>
using namespace std;
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int start, end, sum = 0;

    cout << "Enter starting value: ";
    cin >> start;

    cout << "Enter ending value: ";
    cin >> end;

    cout << "Prime numbers in the range are: ";

    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            cout << i << " ";
            sum += i;
        }
    }

    cout << "\nSum of prime numbers = " << sum << endl;

    return 0;
}