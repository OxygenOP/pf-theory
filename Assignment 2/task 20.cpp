#include<iostream>


using namespace std;

int main(){

    cout << "Hassam Sohail\t\tSU92-BSSEM-S24-017" << endl;
    cout << "Questions no 20" << endl;
    cout << endl;
    cout << endl;
  

    int num1, num2;

    cout << "Input number 1: ";
    cin >> num1;

    cout << "Input number 2: ";
    cin >> num2;

    if(num1 % num2 == 0){
        cout << num1 << " is a multiple of " << num2 << endl;
    }  else {
        cout << num1 << " is not a multiple of " << num2 << endl;

    }


    return 0;
}