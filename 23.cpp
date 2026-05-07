#include <iostream>
using namespace std;

int main() {
    int count = 0, sum = 0;

    for (int i = 100; i <= 200; i++) {
        if (i % 9 == 0) {
            cout << i << " ";
            count++;
            sum += i;
        }
    }

    cout << "\nCount = " << count;
    cout << "\nSum = " << sum;

    return 0;
}
