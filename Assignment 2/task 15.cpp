#include<iostream>


using namespace std;

int main(){

    cout << "Hassam Sohail\t\tSU92-BSSEM-S24-017" << endl;
    cout << "Questions no 15" << endl;
    cout << endl;
    cout << endl;
  
    int BankNotes500 = 0, BankNotes100 = 0, BankNotes50 = 0 , BankNotes20 = 0,
        BankNotes10 = 0, BankNotes5 = 0, BankNotes2 = 0, BankNotes1 = 0, amount;

    cout << "Input your total amount of money: ";
    cin >> amount;


    if(amount <= 0){
        
        cout << "Wrong Input" << endl;

    }else {

        if (amount >= 500) {
        BankNotes500 = amount / 500;
        amount -= BankNotes500 * 500;
        }
        if (amount >= 100) {
            BankNotes100 = amount / 100;
            amount -= BankNotes100 * 100;
        }
        if (amount >= 50) {
            BankNotes50 = amount / 50;
            amount -= BankNotes50 * 50;
        }
        if (amount >= 20) {
            BankNotes20 = amount / 20;
            amount -= BankNotes20 * 20;
        }
        if (amount >= 10) {
            BankNotes10 = amount / 10;
            amount -= BankNotes10 * 10;
        }
        if (amount >= 5) {
            BankNotes5 = amount / 5;
            amount -= BankNotes5 * 5;
        }
        if (amount >= 2) {
            BankNotes2 = amount / 2;
            amount -= BankNotes2 * 2;
        }
        if (amount >= 1) {
            BankNotes1 = amount / 1;
            amount -= BankNotes1;
        }

    }

    cout << "500 Rupee Bank notes: " << BankNotes500 << endl;
    cout << "100 Rupee Bank notes: " << BankNotes100 << endl;
    cout << "50 Rupee Bank notes: " << BankNotes50 << endl;
    cout << "20 Rupee Bank notes: " << BankNotes20 << endl;
    cout << "10 Rupee Bank notes: " << BankNotes10 << endl;
    cout << "5 Rupee Bank notes: " << BankNotes5 << endl;
    cout << "2 Rupee Bank notes: " << BankNotes2 << endl;
    cout << "1 Rupee Bank notes: " << BankNotes1 << endl;


    return 0;
}