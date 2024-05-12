#include<iostream>

using namespace std;

int main(){

    double radius,circumference;
    const double pi = 3.14;

    cout << "Input radius of a circle: ";
    cin >> radius;

    circumference = 2 * pi * radius;

    cout << "Circumference of a circle = " << circumference << endl;

    return 0;
}