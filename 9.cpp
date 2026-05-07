#include <iostream>
using namespace std;

int main() {

    cout << "Demonstrating continue:\n";
    for (int i = 1; i <= 10; i++) {
        if (i == 5)
            continue;
        cout << i << " ";
    }

    cout << "\n\nDemonstrating break:\n";
    for (int i = 1; i <= 10; i++) {
        if (i == 5)
            break;
        cout << i << " ";
    }

    return 0;
}
