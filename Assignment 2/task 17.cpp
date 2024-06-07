#include<iostream>


using namespace std;

int main(){

    cout << "Hassam Sohail\t\tSU92-BSSEM-S24-017" << endl;
    cout << "Questions no 17" << endl;
    cout << endl;
    cout << endl;
  
    // This one was a bit difficult to figure out !! 
    int num;
    string binary = "";

    cout << "Input number: ";
    cin >> num;

    while(num > 0){

        if(num % 2 == 0){
            binary = "0" + binary;
        }else{
            binary = "1" + binary;
        }
        num = num / 2;
    }
    cout << "Binary: " << binary << endl;

    return 0;
}