#include <iostream>
using namespace std;
int main(){
    int student1, student2, result;
    cout<< "Enter the age of first student: "<<endl;
    cin>> student1;
    cout<< "Enter the age of second student: "<<endl;
    cin>> student2;
if (student1>student2){
    cout<< "The first student is older than the second student";
}else if(student1<student2){
    cout<< "The second student is older than the first student";
}else{
    cout<< "Both student are at same age";
}
}