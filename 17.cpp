#include <iostream>
using namespace std;

int main() {
    int n;
    double sum = 1.0;

    cout << "Enter value of n: ";
    cin >> n;

    for (int i = 2; i <= n; i++) {
        sum += 1.0 / (i * i);
    }

    cout << "Sum of series = " << sum;

    return 0;
}
