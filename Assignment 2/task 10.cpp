#include<iostream>


using namespace std;

int main(){

    cout << "Hassam Sohail\t\tSU92-BSSEM-S24-017" << endl;
    cout << "Questions no 10" << endl;
    cout << endl;
    cout << endl;
   
    const double service_charge = 0.015;
    double shares_sold, selling_price_of_share, purchase_price_per_share, investment, sold, bought, total_service_charges = 0;

    cout << "How many shares did you sell: ";
    cin >> shares_sold;

    cout << "What was the buying price (per share): ";
    cin >> purchase_price_per_share;

    cout << "What was the selling price (per share): ";
    cin >> selling_price_of_share;

    bought = purchase_price_per_share * shares_sold;
    investment = bought;
    total_service_charges += investment * service_charge; // Also adding the service charge to investment
    investment += service_charge;


    cout << "Money you invested: " << investment << endl;

    sold = selling_price_of_share * shares_sold;

    cout << "How much you sold for: " << sold << endl;

    total_service_charges += sold * service_charge;
    sold -= sold * service_charge;

    cout << "Amount recieved after Selling: " << sold << endl;

    cout << "Total Service Charges: " << total_service_charges << endl;

    if(investment > sold){
        cout << "You lost: " << investment - sold << endl;
    }else if (investment == sold){
        cout << "Your Earning were neutral" << endl;

    }else {
        cout << "You made a profit of: " << sold - investment << endl;

    }
    

    return 0;
}