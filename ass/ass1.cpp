#include <iostream>
using namespace std;
int main(){
    int score[5]= {2, 10, 8, 4, 1};
    int max = score[0];
    for(int i= 1; i<=4; i++){
        if(score[i]> max){
            max= score[i];
        }
    }
    cout << "The highest is "<< max;
    return 0;
}