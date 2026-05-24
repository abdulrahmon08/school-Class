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
int main(){
    human person;
    person.walk();
    person.run();
    person.play();
    person.talk();
}




