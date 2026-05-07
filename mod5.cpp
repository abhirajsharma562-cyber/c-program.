#include<iostream>
using namespace std;

int main(){
 float a, b, LHS, RHS;

    // Input values for a and b
    cout << "Enter value for a: ";
    cin >> a;
    cout << "Enter value for b: ";
    cin >> b;

    // Evaluate LHS: (a + b)^2
    LHS = (a + b) * (a + b);

    // Evaluate RHS: a^2 + 2ab + b^2
    RHS = (a * a) + (2 * a * b) + (b * b);

    // Display results
    cout << "\nEvaluating (a + b)^2 = a^2 + 2ab + b^2" << endl;
    cout << "LHS (a + b)^2: " << LHS << endl;
    cout << "RHS a^2 + 2ab + b^2: " << RHS << endl;

    // Verification
    if (LHS == RHS) {
        cout << "\nResult: LHS is equal to RHS. Identity Verified!" << endl;
    } else {
        cout << "\nResult: There is a precision difference." << endl;
    }

}
