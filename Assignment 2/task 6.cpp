#include<iostream>


using namespace std;

int main(){

    cout << "Hassam Sohail\t\tSU92-BSSEM-S24-017" << endl;
    cout << "Questions no 6" << endl;
    cout << endl;
    cout << endl;
       
    int a,b, c,d, e,f; 
    char dummyChar;


    cout << "Input first fraction (a/b): ";
    cin >> a >> dummyChar >> b;
    cout << "Input second fraction (c/d): ";
    cin >> c >> dummyChar >> d;
    


    e = a * d + c * b;
    f = b * d;



    cout << "Fraction =  " << e << "/" << f << endl;

    return 0;
}