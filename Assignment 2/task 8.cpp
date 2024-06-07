#include<iostream>


using namespace std;

int main(){

    cout << "Hassam Sohail\t\tSU92-BSSEM-S24-017" << endl;
    cout << "Questions no 8" << endl;
    cout << endl;
    cout << endl;
   
    const double gravitation_constant = 6.67e-8;
    double mass_of_body_1, mass_of_body_2, distance, force;

    cout << "Enter mass of body 1: "; // Bit tired rn :)
    cin >> mass_of_body_1;

    cout << "Enter mass of body 2: ";
    cin >> mass_of_body_2;

    cout << "Enter distance between the masses: "; // Only if i could mention the distance between us 
    cin >> distance;

    force = gravitation_constant * ((mass_of_body_1 * mass_of_body_2) / (distance * distance));

    cout << "Force of Attraction between two masses: " << force << endl;


    return 0;
}