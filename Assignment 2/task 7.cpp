#include<iostream>


using namespace std;

int main(){

    cout << "Hassam Sohail\t\tSU92-BSSEM-S24-017" << endl;
    cout << "Questions no 7" << endl;
    cout << endl;
    cout << endl;
       
    const float tax = 0.14, clothing = 0.1, school_supplies = 0.01, saving_bonds = 0.25;
    float pay_rate,hours_worked, income, net_income, tax_payed, clothing_expense, school_expense, saving_bonds_bought, saving_bonds_parents_bought;

    cout << "What was your Hourly Rate: ";
    cin >> pay_rate;
    
    cout << "How many hours did you work: ";
    cin >> hours_worked;
    
    income = (pay_rate * hours_worked) * 5; // Multiplying with 5 to get total income in 5 weeks

    cout << "Income before Taxes: " << income << endl; 

    tax_payed = income * tax;
    net_income = income - tax_payed;

    cout << "Income after Taxes: " << net_income << endl; // Taxes be hurting :)

    clothing_expense = net_income * clothing;
    net_income -= clothing_expense;

    cout << "Money Spent on Clothes: " << clothing_expense << endl;

    school_expense = net_income * school_supplies;
    net_income -= school_supplies;

    cout << "Money Spent on school supplies: " << school_expense << endl;

    saving_bonds_bought = net_income * saving_bonds;
    net_income -= saving_bonds_bought;

    cout << "Saving Bounds bought worth ($): " << saving_bonds_bought << endl;

    saving_bonds_parents_bought = saving_bonds_bought / 2 ;

    cout << "Saving Bounds Parents bought worth ($): " << saving_bonds_parents_bought << endl;
    cout << "Money left ($): " << net_income << endl;

   
   
    return 0;
}