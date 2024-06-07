#include<iostream>


using namespace std;

int main(){

    cout << "Hassam Sohail\t\tSU92-BSSEM-S24-017" << endl;
    cout << "Questions no 16" << endl;
    cout << endl;
    cout << endl;
  
    // This one was a bit difficult to figure out !! 
    int grade, salary, total_salary;

    cout << "Input your grade: ";
    cin >> grade;

    cout << "Input your salary: ";
    cin >> salary;

    if(grade > 15){
        total_salary = salary * 1.5;
    }else {
        total_salary = salary * 1.25;

    }

    cout << "Total Salary: " << total_salary << endl;

    return 0;
}