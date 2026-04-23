#include <iostream>
using namespace std;
int main(){
   int a[3][4]= {{2,3,1,4}, {7,5,8,3}, {9,7,4,2}};
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout << a[i][j]<< endl;
        }
    }
   
    cout << "------------------" << endl<< endl;

    int b[3][3]= {{4,5,2}, {6,8,3}, {9,7,1}};
    for(int v=0; v<3; v++){
        for(int u=0; u<3; u++){
            cout << b[v][u]<< endl;
        }
    }
    return 0;
}