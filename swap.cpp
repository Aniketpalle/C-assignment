#include <iostream>

int main() {
    int a = 5, b = 10;

    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;

    // Perform the swap using arithmetic operations
    a = a + b; // a now holds the sum of the original a and b (15)
    b = a - b; // b now holds the original a (15 - 10 = 5)
    a = a - b; // a now holds the original b (15 - 5 = 10)

    std::cout << "After swap:  a = " << a << ", b = " << b << std::endl;

    return 0;
}
