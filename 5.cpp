#include <iostream>
using namespace std;

int main() {
    int units;
    double bill;

    cout << "Enter units consumed: ";
    cin >> units;

    if (units <= 50) {
        bill = units * 1.50;
    }
    else if (units <= 150) {
        bill = (50 * 1.50) + (units - 50) * 2.50;
    }
    else if (units <= 250) {
        bill = (50 * 1.50) + (100 * 2.50) + (units - 150) * 4.00;
    }
    else {
        bill = (50 * 1.50) + (100 * 2.50) + (100 * 4.00) + (units - 250) * 6.00;
    }

    cout << "Total Electricity Bill = " << bill << endl;

    return 0;
}
