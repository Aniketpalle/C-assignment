#include <iostream>

void printFibonacci(int N) {
    if (N <= 0) {
        return;
    }

    // Initialize the first two Fibonacci numbers
    long long t1 = 0, t2 = 1;
    long long nextTerm;

    std::cout << t1 << " " << t2 << " "; // Print the initial two numbers

    // Generate and print the next N-2 terms
    for (int i = 1; i <= N - 2; ++i) {
        nextTerm = t1 + t2;
        std::cout << nextTerm << " ";
        t1 = t2;
        t2 = nextTerm;
    }

    std::cout << std::endl;
}

int main() {
    int N;
    // Example input
    N = 6; 
    std::cout << "Input: " << N << std::endl;
    std::cout << "Output: ";
    printFibonacci(N); // Call the function to print the series

    return 0;
}
