#include<iostream>

using namespace std;

int main(){
    // Hassam Sohail
    // SU92-BSSEM-S24-017
    cout << "Name: \t Hassam Sohail" << endl;
    cout << "Roll Number: \t SU92-BSSEM-S24-017" << endl;
    cout << endl;
    cout << "----------------------------------" << endl;

    double celsius = 0, fahrenheit = 0;

    cout << "Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9/5) + 32;
    cout << "Fahrenheit: " << fahrenheit << endl;


    return 0;
}