#include<iostream>

using namespace std;

int main(){
    // Hassam Sohail
    // SU92-BSSEM-S24-017
    cout << "Name: \t Hassam Sohail" << endl;
    cout << "Roll Number: \t SU92-BSSEM-S24-017" << endl;
    cout << endl;
    cout << "----------------------------------" << endl;

    double fullTank = 0, miles = 0, mileage = 0;
    
    cout << "Input Tank Capacity: ";
    cin >> fullTank;

    cout << "Input Miles Run: ";
    cin >> miles;

    mileage = miles / fullTank;

    cout << "Miles Run Per Gallon: " << mileage << endl;


    return 0;
}