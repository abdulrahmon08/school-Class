#include <iostream>
using namespace std;
class human{
    public:
    string gender;
    int age;
    string complexion;
    float height;
    float weight;
    void walk(){
        cout<< "Human walks"<< endl;
    }
    void talk(){
        cout<< "Human talks"<< endl;
    }
    void run(){
        cout<< "Human runs"<< endl;
    }
    void sit(){
        cout<< "Human sits"<< endl;
    }
    void eat(){
        cout<< "Human eats"<< endl;
    }
};
int main(){
human person;
person.walk();
person.talk();
person.run();
person.sit();
person.eat();


// Arrays
double numbers[4][3]= {{1.8, 2.7, 7.1}, {4.4, 8.2, 11.7}, {10.15, 15.95,12.25}, {6.75, 40.75,18.55}};


//Comparing valule of m and n
int m=3 , n=6;
if(m>n){
	cout<< "M is bigger than N"<< endl;
}else{
	cout<< "N is bigger than M"<< endl;
}

//Comparing of two numbers
int num1, num2, sum, product, difference;
cout<< "Enter the first number: "<< endl;
cin>> num1;
cout<< "Enter the second number: "<< endl;
cin>> num2;
sum= num1 + num2;
product= num1 * num2;
difference= num1 - num2;
cout<< "Sum: "<< sum<< endl;
cout<< "Product: "<< product<< endl;
cout<< "Difference: "<< difference<< endl;





// Odd numbers

int a=19;
for(int i=1; i<=a; i++){
    if(i%2!=0){
        cout<< i<< endl;
    }
}


//  Odd and even numbers
int number;
cout<< "Enter a number: "<< endl;
cin>> number;
for (int i=1; i<=number; i++){
    if(i%2==0){
        cout<< i<< " is an even number"<< endl;
    }
    else{
        cout<< i<< " is an odd number"<< endl;
    }
}

     // Circle calculations
    float radius=2.5, area, circumference, diameter;
    diameter = 2 * radius;
    area = 3.14159 * (radius * radius);
    circumference = 2 * 3.14159 * radius;
    cout << "Area: " << area << endl;
    cout << "Circumference: " << circumference << endl;
    cout << "Diameter: " << diameter << endl;

    // Average score calculations
    float score1, score2, score3, average;
    string choice;
    
    do{
        cout << "Input the first score: "<<endl;
        cin>> score1;
        cout << "Input the second score: "<<endl;
        cin>> score2;
        cout << "Input the third score: "<<endl;
        cin>> score3;
        average= (score1 + score2 +score3)/3;
        cout<< average<<endl;
        cout<< "Do you want to continue? (Yes/ No)";
        cin>> choice;
    } while (choice== "yes" || "Yes");
    {
        cout<< "program end";    
        return 0;
    }
   
}
