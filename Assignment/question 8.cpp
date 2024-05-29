#include<iostream>

using namespace std;

int main(){
    // Hassam Sohail
    // SU92-BSSEM-S24-017
    cout << "Name: \t Hassam Sohail" << endl;
    cout << "Roll Number: \t SU92-BSSEM-S24-017" << endl;
    cout << endl;
    cout << "----------------------------------" << endl;

    double servings = 10, calorie_serving = 300, 
    total_Cookies = 40, cookie_rate = 0, calorieConsumed=0, 
    cookies = 0;


    cookie_rate = (calorie_serving * servings) / total_Cookies;

    cout << "Input Cookies Consumed: ";
    cin >> cookies;

    calorieConsumed = cookie_rate * cookies;

    cout << "Calories Consumed = " << calorieConsumed << endl;


    return 0;
}

