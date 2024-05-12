#include<iostream>

using namespace std;

int main(){

    double celsius, fahrenheit ;

    cout << "Input temperature (fahrenheit): ";
    cin >> fahrenheit;

    celsius = (fahrenheit-32) * (5/9);

    cout << "Celsius  = " << celsius << endl;

    return 0;
}