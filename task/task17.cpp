#include <iostream>
using namespace std;
int main(){
    string names[2][5]= {{"Alice", "Bob", "Charlie", "David", "Eve"}, {"Frank", "Grace", "Henry", "Ivy", "Jack"}};
    for(int i=0; i<2; i++){
        for(int j=0; j<5; j++){
            cout << names[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}