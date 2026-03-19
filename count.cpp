#include <iostream>

int countDigits(long long n) {
    if (n == 0) return 1; 
    int count = 0;
    
    long long temp = (n < 0) ? -n : n; 

    while (temp > 0) {
        temp /= 10; 
        count++;    
    }
    return count;
}

int main() {
    long long number = 12345;
 

    int digits = countDigits(number);
    std::cout << "Input: " << number << std::endl;
    std::cout << "Output: Number of digits = " << digits << std::endl;

    return 0;
}
