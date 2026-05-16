#include <iostream>
#include <string>
using namespace std;
int main()
{
    string phrase = "Programming";
    string word = phrase.substr(3, 4);
    cout << word;
    return 0;
}