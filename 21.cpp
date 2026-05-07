#include <iostream>
using namespace std;

int main() {
    int num, count = 0, sum = 0;
    int max = -9999, min = 9999;

    while (true) {
        cout << "Enter number: ";
        cin >> num;

        if (num == -1)
            break;

        count++;
        sum += num;

        if (num > max) max = num;
        if (num < min) min = num;
    }

    if (count > 0) {
        cout << "Count = " << count << endl;
        cout << "Maximum = " << max << endl;
        cout << "Minimum = " << min << endl;
        cout << "Average = " << (double)sum / count << endl;
    } else {
        cout << "No numbers entered";
    }

    return 0;
}
