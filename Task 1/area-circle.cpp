#include<iostream>

using namespace std;

int main(){

    double area,radius;

    cout << "Input radius of a circle: ";
    cin >> radius;

    area = 3.14 * radius * radius;

    cout << "Area of a circle = " << area << endl;

    return 0;
}