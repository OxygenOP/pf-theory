#include<iostream>

using namespace std;

int main(){

    double num1, num2, addition, substraction,multiplication,division ;

    cout << "Input number 1: ";
    cin >> num1;


    cout << "Input number 2: ";
    cin >> num2;


    addition = num1 + num2;
    cout << "Addition = " << addition << endl;

    substraction = num1 - num2;
    cout << "Substraction = " << substraction << endl;

    multiplication = num1 * num2;
    cout << "Multiplication = " << num1 * num2 << endl;

    division = num1 / num2;
    cout << "Division = " << num1 / num2 << endl;




    return 0;
}