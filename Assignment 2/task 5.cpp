#include<iostream>


using namespace std;

int main(){

    cout << "Hassam Sohail\t\tSU92-BSSEM-S24-017" << endl;
    cout << "Questions no 5" << endl;
    cout << endl;
    cout << endl;
       
   
    const double dollar = 1.487;
    const double franc = 0.172;
    const double deutschemark  = 0.584;
    const double yen  = 0.00955;

    double pounds = 0;

    cout << "Input Pounds: ";
    cin >> pounds;

    cout << "Us Dollar: " << pounds * dollar << endl;
    cout << "Franc: " << franc * dollar << endl;
    cout << "deutschemark: " << deutschemark * dollar << endl;
    cout << "yen: " << yen * dollar << endl;


    return 0;
}