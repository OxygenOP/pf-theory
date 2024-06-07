#include<iostream>
#include<iomanip>


using namespace std;

int main(){

    cout << "Hassam Sohail\t\tSU92-BSSEM-S24-017" << endl;
    cout << "Questions no 3" << endl;
    cout << endl;
    cout << endl;

    double gallons = 0, cubicFeet= 0;
   
    cout << "Enter the number of gallons: ";
    cin >> gallons;

    cubicFeet = gallons / 7.481;

    cout << "total cubic feet = " << cubicFeet << endl;


    return 0;
}