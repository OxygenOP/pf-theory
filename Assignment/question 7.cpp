#include<iostream>

using namespace std;

int main(){
    // Hassam Sohail
    // SU92-BSSEM-S24-017
    cout << "Name: \t Hassam Sohail" << endl;
    cout << "Roll Number: \t SU92-BSSEM-S24-017" << endl;
    cout << endl;
    cout << "----------------------------------" << endl;

    string monthA, monthB, monthC;
    double rainFallA, rainFallB, rainFallC,  average = 0;

    cout << "Input Month A: ";
    cin >> monthA;

    cout << "Input Rainfall in " << monthA << ": ";
    cin >> rainFallA;


    cout << "Input Month B: ";
    cin >> monthB;

    cout << "Input Rainfall in " << monthB << ": ";
    cin >> rainFallB;

    cout << "Input Month C: ";
    cin >> monthC;
    
    cout << "Input Rainfall in " << monthC << ": ";
    cin >> rainFallC;

    average = (rainFallA + rainFallB + rainFallC) / 3;

    cout << "Average Rainfall = " << average << endl;


    return 0;
}

