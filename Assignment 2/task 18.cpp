#include<iostream>
#include<cmath>

using namespace std;




int main(){


    cout << "Hassam Sohail\t\tSU92-BSSEM-S24-017" << endl;
    cout << "Questions no 18" << endl;
    cout << endl;
    cout << endl;
  

    double num1,num2;
    char operation;
    



    cout << "Input number 1: ";
    cin >> num1;

    cout << "Input number 2: ";
    cin >> num2;

    cout << "Input Operator (+, -, *, /): ";
    cin >> operation;



    //Perform Arithmetic Operation
    if(operation == '+'){
        cout << num1 << " " << operation << " " << num2 << " = " << num1 + num2 << endl;
    }
    else if(operation == '-'){
        cout << num1 << " " << operation << " " << num2 << " = " << num1 + num2 << endl;
    }
     else if(operation == '*'){
        cout << num1 << " " << operation << " " << num2 << " = " << num1 + num2 << endl;
    }
    else if(operation == '/' && num2 != 0){
        cout << num1 << " " << operation << " " << num2 << " = " << num1 + num2 << endl;
    }
    else {
        cout << "Operation Doesn't Exist" << endl;
    }

 


    return 0;
}