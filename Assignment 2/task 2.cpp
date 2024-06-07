#include<iostream>
#include<iomanip>


using namespace std;

int main(){

    cout << "Hassam Sohail\t\tSU92-BSSEM-S24-017" << endl;
    cout << "Questions no 2" << endl;
    cout << endl;
    cout << endl;

    string subject1, subject2, subject3, subject4,subject5;
    double  marks1, marks2, marks3, marks4, marks5,
    maxMarks1, maxMarks2, maxMarks3, maxMarks4, maxMarks5, maxTotal, obtained, percentage;


    cout << "Input Name of Subject 1: ";
    cin >> subject1;

    cout << "Input Max Marks of " << subject1 << ": ";
    cin >> maxMarks1;

     cout << "Input Marks obtained in " << subject1 << ": ";
    cin >> marks1;

    cout << "Input Name of Subject 2: ";
    cin >> subject2;

    cout << "Input Max Marks of " << subject2 << ": ";
    cin >> maxMarks2;

     cout << "Input Marks obtained in " << subject2 << ": ";
    cin >> marks2;

    cout << "Input Name of Subject 3: ";
    cin >> subject3;

    cout << "Input Max Marks of " << subject3 << ": ";
    cin >> maxMarks3;

     cout << "Input Marks obtained in " << subject3 << ": ";
    cin >> marks3;


    cout << "Input Name of Subject 4: ";
    cin >> subject4;

    cout << "Input Max Marks of " << subject4 << ": ";
    cin >> maxMarks4;

     cout << "Input Marks obtained in " << subject4 << ": ";
    cin >> marks4;

    cout << "Input Name of Subject 5: ";
    cin >> subject5;

    cout << "Input Max Marks of " << subject5 << ": ";
    cin >> maxMarks5;

    cout << "Input Marks obtained in " << subject5 << ": ";
    cin >> marks5;


    maxTotal = maxMarks1 + maxMarks2 + maxMarks3 + maxMarks4 + maxMarks5;
    obtained = marks1 + marks2 + marks3 + marks4 + marks5;
    percentage = (obtained * 100 )/ maxTotal;

    cout << "*****************************************************************" << endl;
    cout << "* Subjects \t\t Max Marks \t\t Obtained Marks *" << endl;
    cout << "*****************************************************************" << endl;
    cout << "* " << subject1 << " \t\t   " << maxMarks1 << " \t\t\t\t " << marks1 << "\t*" << endl;
    cout << "* " << subject2 << " \t\t\t   " << maxMarks2 << " \t\t\t\t " << marks2 << "\t*" << endl;
    cout << "* " << subject3 << " \t\t   " << maxMarks3 << " \t\t\t\t " << marks3 << "\t*" << endl;
    cout << "* " << subject4 << " \t\t   " << maxMarks4 << " \t\t\t\t " << marks4 << "\t*" << endl;
    cout << "* " << subject5 << " \t\t   " << maxMarks5 << " \t\t\t\t " << marks5 << "\t*" << endl;
    cout << "*****************************************************************" << endl;
    cout << "* Max Total \t\t  "<< maxTotal<<"\t\tObtained Marks \t " << obtained << "\t*" << endl;
    cout << "*****************************************************************" << endl;
    cout << "*\t\t\t\t\t Percentage \t " << setprecision(4) << percentage << "\t*" << endl;
    cout << "*****************************************************************" << endl;











    return 0;
}