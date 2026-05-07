#include<iostream>
using namespace std;

int main(){
     float basic, hra, da, other, gross;


    cout << "Enter Basic Salary: ";
    cin >> basic;

    cout << "Enter HRA (House Rent Allowance): ";
    cin >> hra;

    cout << "Enter DA (Dearness Allowance): ";
    cin >> da;

    cout << "Enter Other Allowances: ";
    cin >> other;


    gross = basic + hra + da + other;


    cout << "\n--- Salary Slip ---" << endl;
    cout << "Gross Salary: " << gross << endl;


}
