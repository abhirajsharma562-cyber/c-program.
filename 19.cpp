#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int temp = 0;
        for (int j = 1; j <= i; j++) {
            temp += j;
        }
        sum += temp;
    }

    cout << "Sum = " << sum;
    return 0;
}
