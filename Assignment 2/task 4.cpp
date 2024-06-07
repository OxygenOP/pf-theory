#include<iostream>
#include<ctype.h>


using namespace std;

int main(){

    cout << "Hassam Sohail\t\tSU92-BSSEM-S24-017" << endl;
    cout << "Questions no 4" << endl;
    cout << endl;
    cout << endl;

    char letter;

       
    cout << "Enter a Letter: ";
    cin >> letter;

    cout << islower(letter) << endl;

    return 0;
}