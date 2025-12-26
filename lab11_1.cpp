#include <ostream>
#include <string>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

    cout << "Press Enter 3 times to reveal your future.";
    string grade[9] = {"A", "B+", "B", "C+", "C", "D+", "D", "F","W"};
    string text;
    for(int i = 0 ; i < 3 ; i++){
        getline(cin , text);
    }
    srand(time(0));
    cout << "You will get " << grade[rand()%8]<< " in this 261102.";   
}