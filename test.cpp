#include<iostream>
using namespace std;
int main(){
     
    float length, width, area, volume, height;
       cout<< "enter length";
       cin>> length;
       cout << "enter width";
       cin>> width;
       cout<< "enter height";
       cin>> height;
       area= length*width;
       volume= length*height*width;
       cout<<"area ="<< area<< endl;
       cout<< "volume ="<< volume<< endl;

       
    int num1, num2;
    cout<< "enter two number";
    cin>> num1>>num2;
    cout<< "sum ="<< num1+num2;
    cout<< "product ="<< num1*num2;
    cout<< "difference ="<< num1 - num2;
   cout<< "quotient ="<< num1/num2;
    return 0;
}

    