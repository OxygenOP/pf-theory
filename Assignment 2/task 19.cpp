#include<iostream>


using namespace std;

int main(){

    cout << "Hassam Sohail\t\tSU92-BSSEM-S24-017" << endl;
    cout << "Questions no 19" << endl;
    cout << endl;
    cout << endl;
  

    int num;

    cout << "Input number: ";
    cin >> num;


    if(num % 2 == 0){
        cout << num << " is an even number" << endl;
    }  else {
        cout << num << " is an odd number" << endl;

    }


    return 0;
}