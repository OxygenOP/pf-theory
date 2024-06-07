#include<iostream>


using namespace std;

int main(){

    cout << "Hassam Sohail\t\tSU92-BSSEM-S24-017" << endl;
    cout << "Questions no 13" << endl;
    cout << endl;
    cout << endl;
  
    int a,b,c, result;


    cout << "Input Co-Effecient a: "; 
    cin >> a;

    cout << "Input Co-Effecient b: "; 
    cin >> b;

    cout << "Input Co-Effecient c: "; 
    cin >> c;
   
   result = (b * b) - 4 * a * c;

    if(result > 0){
        cout << "The Equation has 2 real roots" << endl;
    }else if (result < 0){
        cout << "The Equation has 2 complex roots" << endl;
    } else {
        cout << "The Equation has a single repeated root" << endl;


    }
   

    return 0;
}