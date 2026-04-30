#include <iostream>
using namespace std;
int add(int x, int y){
    return x + y;
}
int main(){
int a, b, result;
cout<< "Enter the two numbers: " <<endl;
cin>> a >>b;
result = add(a, b);
cout << "Total is "<< result<< endl;
return 0;
}
