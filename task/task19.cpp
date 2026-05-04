#include <iostream>
using namespace std;
int main(){
    int numbers[4]= {10, 2, 13, 4};
    int lowest = numbers[0];
    for(int i=0; i<4; i++){
        if(numbers[i] < lowest){
            lowest = numbers[i];
        }
    }
    cout << "The lowest number is: " << lowest << endl;
    return 0;
}