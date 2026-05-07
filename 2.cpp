#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, original, remainder, result = 0, n = 0;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while (original != 0) {
        original /= 10;
        n++;
    }

    original = num;

    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, n);
        original /= 10;
    }

    if (result == num)
        cout << "Armstrong number";
    else
        cout << "Not an Armstrong number";

    return 0;
}
