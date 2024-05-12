#include<iostream>
#include<ctype.h>


using namespace std;

int main(){

    char character;

    cout << "Input Character: ";
    cin >> character;
    
    cout << "Is Function Lower" << islower(character) << endl;

    return 0;
}