#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double x, y, z, M;
    cout<< "Input the value of y"<<endl;
    cin>> y;
    cout<< "Input the value of z"<<endl;
    cin>> z;
    cout<< "Input the value of M"<<endl;
    cin>> M;
x= cos((y*y) - sin(z)) + log(M);
cout<< "The value of x is "<< x ;
return 0;
}
