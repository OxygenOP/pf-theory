#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    cout << setw(15) << left << "Location";
    cout << setw(1);
    cout << setw(15) << right << "Population";

    cout << endl;

    cout << setw(15) << left << "LAHORE";
    cout << setw(1);
    cout << setw(15) << right << "245785";

    cout << endl;

    cout << setw(15) << left << "ISLAMABAD";
    cout << setw(1);
    cout << setw(15) << right << "47";

    cout << endl;

    cout << setw(15) << left << "FAISLABAD";
    cout << setw(1);
    cout << setw(15) << right << "9761";

    cout << endl;

    
    return 0;
}