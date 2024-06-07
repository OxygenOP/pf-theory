#include<iostream>


using namespace std;

int main(){

    cout << "Hassam Sohail\t\tSU92-BSSEM-S24-017" << endl;
    cout << "Questions no 14" << endl;
    cout << endl;
    cout << endl;
  
    int account_number;
    char account_type;
    double minBalance, currentBalance, service_charge = 0, interest = 0;
    string message;

    cout << "Input account number: "; 
    cin >> account_number;

    cout << "Input account type (c for Checking) (s for standard): "; 
    cin >> account_type;

    cout << "Input min balance: "; 
    cin >> minBalance;

    cout << "Input current balance: "; 
    cin >> currentBalance;
    cout << endl;

    if(currentBalance < minBalance){
        if(account_type == 's'){
            service_charge = 10;
            message =  "Service charge of 10$ charged because balance is below threshhold...";
        }else{
            
            service_charge = 10;
            message = "Service charge of 10$ charged because balance is below threshhold...";
        }

    }
    else{
        if(account_type == 's'){
            interest = currentBalance * 0.04;
            currentBalance += interest;
            message = "4% Interest applied..";
        }else{
            if(currentBalance <= minBalance + 5000){
                interest = currentBalance * 0.03;
                message = "3% Interest applied.." ;            
            }else {
                interest = currentBalance * 0.05;
                message = "5% Interest applied.." ; 
            }
            currentBalance += interest;
        }

    }

    cout << "Account Number: " << account_number << endl;
    cout << "Account Type: " << (account_type == 's' ? "Savings" : "Checking") << endl;
    cout << "Current Balance: $" << currentBalance << endl;
    cout << message << endl;


    return 0;
}