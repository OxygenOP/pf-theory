#include<iostream>

using namespace std;

int main(){

    double num1, num2,num3,num4,average, total ;

    cout << "Input number 1: ";
    cin >> num1;


    cout << "Input number 2: ";
    cin >> num2;

    cout << "Input number 3: ";
    cin >> num3;

    cout << "Input number 4: ";
    cin >> num4;

    total = num1 + num2 + num3 + num4;
    average = total / 4;


    cout << "Total = " << total << endl;
    cout << "Average = " << average << endl;


    return 0;
}