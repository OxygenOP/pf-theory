#include<iostream>


using namespace std;

int main(){

    cout << "Hassam Sohail\t\tSU92-BSSEM-S24-017" << endl;
    cout << "Questions no 9" << endl;
    cout << endl;
    cout << endl;
   
    const int ton = 2205;
    double bag_capacity, bags_needed;

    cout << "How many pounds of rice can the bag store: ";
    cin >> bag_capacity;

    bags_needed = ton / bag_capacity;

    cout << "You need " << bags_needed << " bags to hold a ton of rice" << endl; 




    return 0;
}