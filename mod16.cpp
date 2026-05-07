#include <iostream>

int main() {

    bool result = (25 / 5 + 3 * 2 <= 15) || (!(8 - 3 > 10));


    std::cout << "The final result is: " << std::boolalpha << result << " (" << (int)result << ")" << std::endl;

    return 0;
}
