#include <iostream>
#include <cmath>
using namespace std;
int area_of_square(int a){
    return a * a;
}
int area_of_rectangle(int w, int l){
	return w * l;
}
int area_of_circle(int r){
	return 3.142 * (r*r);
}
int main(){
	cout<< "Area of square of length 4 is "<< area_of_square(4) << endl;
	cout<< "Area of rectangle of width 5 and length 10 is "<< area_of_rectangle(5, 10) << endl;
	cout<< "Area of circle of radius 7 is "<< area_of_circle(7) << endl;
    return 0;
}
