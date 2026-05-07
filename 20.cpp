#include <iostream>
using namespace std;

int main() {
    int n;
    double x, sum = 1, term = 1;

    cout << "Enter x and n: ";
    cin >> x >> n;

    for (int i = 1; i < n; i++) {
        term *= (-1) * x * x / ((2 * i) * (2 * i - 1));
        sum += term;
    }

    cout << "Sum = " << sum;
    return 0;
}
