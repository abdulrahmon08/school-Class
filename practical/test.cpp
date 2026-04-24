#include <iostream>
using namespace std;
int main(){
    int test1, test2, test3;
    cout << "Enter your first test score: "<< endl;
    cin >> test1;
    cout << "Enter your second test score: "<< endl;
    cin >> test2;
    cout << "Enter your third test score: "<< endl; 
    cin >> test3;
    int total = test1 + test2 + test3;
    cout << "Your total score is: " << total << endl;
}