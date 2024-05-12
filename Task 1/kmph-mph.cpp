#include<iostream>

using namespace std;

int main(){

    double kmph, mph ;

    cout << "Input Kilometers/Hour (Kmph): ";
    cin >> kmph;

    mph = (kmph * 0.6213712);

    cout << "Miles per hour  = " << mph << endl;

    return 0;
}