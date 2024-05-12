#include<iostream>

using namespace std;

int main(){

    double celsius, fahrenheit ;

    cout << "Input temperature (celsius): ";
    cin >> celsius;

    fahrenheit = celsius *  (9/5) + 32;

    cout << "Fahrenheit  = " << fahrenheit << endl;

    return 0;
}