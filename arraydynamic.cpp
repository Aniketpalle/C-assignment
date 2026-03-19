#include <iostream>
#include <algorithm> 
#include <limits>    

class Analyzer {
private:
    int* numbers;      
    int size;          

public:
    
    Analyzer(int N) : size(N), numbers(nullptr) {
        if (size > 0) {
            numbers = new int[size]; 
        }
    }

   
    ~Analyzer() {
        if (numbers != nullptr) {
            delete[] numbers;
            numbers = nullptr;
        }
    }

   
    void acceptNumbers() {
        std::cout << "Enter " << size << " numbers:" << std::endl;
        for (int i = 0; i < size; ++i) {
            std::cout << "Number " << (i + 1) << ": ";
            std::cin >> numbers[i];
        }
    }

    void findMax() const {
        if (size == 0) {
            std::cout << "Cannot find maximum, array is empty." << std::endl;
            return;
        }

        int maxVal = numbers[0];
        for (int i = 1; i < size; ++i) {
            if (numbers[i] > maxVal) {
                maxVal = numbers[i];
            }
        }
        std::cout << "Maximum number: " << maxVal << std::endl;
    }

   
    void findMin() const {
        if (size == 0) {
            std::cout << "Cannot find minimum, array is empty." << std::endl;
            return;
        }

        int minVal = numbers[0];
        for (int i = 1; i < size; ++i) {
            if (numbers[i] < minVal) {
                minVal = numbers[i];
            }
        }
        std::cout << "Minimum number: " << minVal << std::endl;
    }

  
    void calculateAverage() const {
        if (size == 0) {
            std::cout << "Cannot calculate average, array is empty." << std::endl;
            return;
        }

        long long sum = 0;
        for (int i = 0; i < size; ++i) {
            sum += numbers[i];
        }

      
        double average = static_cast<double>(sum) / size;
        std::cout << "Average value: " << average << std::endl;
    }

  
    void analyze() const {
        if (size == 0) {
            std::cout << "No numbers to analyze." << std::endl;
            return;
        }
        findMax();
        findMin();
        calculateAverage();
    }
};

int main() {
    int N;
    std::cout << "Enter the number of elements (N): ";
    std::cin >> N;

    if (N <= 0) {
        std::cout << "Invalid number of elements. Exiting." << std::endl;
        return 1;
    }

    
    Analyzer analyzer(N);

 
    analyzer.acceptNumbers();

  
    analyzer.analyze();

  

    return 0;
}
