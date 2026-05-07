#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0 && num % 3 == 0)
        cout << "Divisible by both 2 and 3";
    else
        cout << "Not divisible by both 2 and 3";

    return 0;
}
