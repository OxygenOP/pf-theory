#include<iostream>

using namespace std;

int main(){
    // Hassam Sohail
    // SU92-BSSEM-S24-017
    cout << "Name: \t Hassam Sohail" << endl;
    cout << "Roll Number: \t SU92-BSSEM-S24-017" << endl;
    cout << endl;
    cout << "----------------------------------" << endl;

    int classA, classB, classC, totalCost = 0;

    cout << "Input A class seat sales: ";
    cin >> classA;

    cout << "Input B class seat sales: ";
    cin >> classB;

    cout << "Input C class seat sales: ";
    cin >> classC;

    totalCost = (classA * 15) + (classB * 12) + (classC * 9);

    cout << "Total Cost = " << totalCost << endl;


    return 0;
}

