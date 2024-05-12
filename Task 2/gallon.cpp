#include<iostream>


using namespace std;

int main(){

    double gallons, cubic_foot;

    cout << "Input number of gallons: ";
    cin >> gallons;
    
    cubic_foot = gallons / 7.481;
    cout << "Cubic Foot = " << cubic_foot << endl;

    return 0;
}