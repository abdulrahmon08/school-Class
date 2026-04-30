#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "Select a season:\n";
    cout << "1. Summer\n2. Winter\n3. Autumn\n4. Spring\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Season: Summer";
            break;
        case 2:
            cout << "Season: Winter";
            break;
        case 3:
            cout << "Season: Autumn";
            break;
        case 4:
            cout << "Season: Spring";
            break;
        default:
            cout << "Invalid choice!";
    }

    return 0;
}