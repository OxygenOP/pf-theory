#include<iostream>


using namespace std;

int main(){

    cout << "Hassam Sohail\t\tSU92-BSSEM-S24-017" << endl;
    cout << "Questions no 10" << endl;
    cout << endl;
    cout << endl;
  
    int total_cookies, cookies_per_box, box_per_container, total_boxes, total_containers;

    cout << "Input total number of cookies: ";
    cin >> total_cookies;
    
    cout << "Input cookies in a box: ";
    cin >> cookies_per_box;

    cout << "Input cookie boxes in a container: ";
    cin >> box_per_container;


    total_boxes = total_cookies / cookies_per_box;
    int leftover_cookies = total_cookies % cookies_per_box;

    total_containers = total_boxes / box_per_container;
    int leftover_boxes = total_boxes % box_per_container;


    cout << "Total Boxes needed: " << total_boxes << endl;
    cout << "Total Containers needed: " << total_containers << endl;


    if(leftover_cookies > 0){
        cout << "Cookies leftover: " << leftover_cookies << endl;
    }

    if(leftover_boxes > 0){
        cout << "Boxes leftover: " << leftover_boxes << endl;
    }

    return 0;
}