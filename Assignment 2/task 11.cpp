#include<iostream>


using namespace std;

int main(){

    cout << "Hassam Sohail\t\tSU92-BSSEM-S24-017" << endl;
    cout << "Questions no 11" << endl;
    cout << endl;
    cout << endl;
   
    float interest_rate, net_balance, payment, d1, d2, average_daily_balance, interest;
    
    cout << "What is the net balance: ";
    cin >> net_balance;

    cout << "What is the payment made: ";
    cin >> payment;

    cout << "What is the interest rate: ";
    cin >> interest_rate;
    
    cout << "The number of days in billing cycle: ";
    cin >> d1;

    cout << "number of days before billing cycle payment is made: ";
    cin >> d2;
    
    average_daily_balance = (net_balance * d1 - payment * d2)/d1;
    interest = average_daily_balance * interest;

    cout << "The interest on unpaid Balance = " << interest << endl;

    return 0;
}