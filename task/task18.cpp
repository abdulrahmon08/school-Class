#include <iostream>
using namespace std;
int main(){
    int numbers[4]= {1, 2, 13, 4};
    int highest = numbers[0];
    for(int i=0; i<4; i++){
        if(numbers[i] > highest){
            highest = numbers[i];
        }
    }
    cout << "The highest number is: " << highest << endl;
    return 0;
}