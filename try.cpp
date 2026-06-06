#include<iostream>
using namespace std;
class human{
    public:
    string gender;
    int age;
    string compleion;
    float height;
    float weight;
    void walk(){
        cout<< "human is walking"<< endl;
    }
    void run(){
        cout << "human is running"<< endl;
    }
    void play(){
        cout<< "human is playing"<< endl;

    }
    void talk(){
        cout<< "human is talking"<< endl;
    }
};
class dog{
    public:
    string breed;
    string color;
    int age;
    float height;
    float weight;
    void walk(){
        cout<< "dog is walking"<< endl;
    }
    void run(){
        cout << "dog is running"<< endl;
    }
    void play(){
        cout<< "dog is playing"<< endl;

    }
    void bark(){
        cout<< "dog is barking"<< endl;
    }
};
int main(){
    human person;
    dog pet;
    person.walk();
    person.run();
    person.play();
    person.talk();
    pet.walk();
    pet.run();
    pet.play();
    pet.bark();
}




