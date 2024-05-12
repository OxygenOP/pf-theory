#include<iostream>

using namespace std;

int main(){

    const float british = 1.487, french = 0.172, german = 0.584, yen = 0.00955;
    float dollar;

    cout << "Input Dollars: "; 
    cin >> dollar;


    cout << "British Pound = " << british * dollar << endl;
    cout << "French Pound = " << french * dollar << endl;
    cout << "German Pound = " << german * dollar << endl;
    cout << "Yen Pound = " << yen * dollar << endl;



    
    return 0;
}