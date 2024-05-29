#include<iostream>

using namespace std;

int main(){
    // Hassam Sohail
    // SU92-BSSEM-S24-017
    cout << "Name: \t Hassam Sohail" << endl;
    cout << "Roll Number: \t SU92-BSSEM-S24-017" << endl;
    cout << endl;
    cout << "----------------------------------" << endl;

    double loan, oil, gas,tires,insurance, maintanence, total_monthly, total_anualy;


    cout << "Input Loan Amount: ";
    cin >> loan;

    cout << "Input Gas Amount: ";
    cin >> gas;

    cout << "Input Oil Amount: ";
    cin >> oil;

    cout << "Input Tires Amount: ";
    cin >> tires;

    cout << "Input Maintanence Amount: ";
    cin >> maintanence;

    cout << "Input Insurance Amount: ";
    cin >> insurance;

    total_monthly = loan + gas + oil + tires + maintanence + insurance;
    total_anualy = total_monthly * 12;


    cout << "Monthly cost = " << total_monthly << endl;
    cout << "Yearly cost = " << total_anualy << endl;




    return 0;
}

