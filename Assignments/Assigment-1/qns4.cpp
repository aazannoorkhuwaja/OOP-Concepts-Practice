#include <iostream>
using namespace std;

// Function prototypes
int s_array(int arr[], int size);
int factorial(int n);

int main() {
    // 1. Array Operations with Recursion
    // Declare and initialize array of size 5
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    
    // Calculate sum using recursive function
    int array_sum = s_array(arr, size);
    
    // 2. Factorial Computation
    // Calculate factorial of array length (5)
    int fact = factorial(size);
    
    // 3. Output
    cout << "Array elements: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\nSum of array elements: " << array_sum << endl;
    cout << "Factorial of array length (" << size << "): " << fact << endl;
    
    return 0;
}

// Recursive function to calculate sum of array elements
int s_array(int arr[], int size) {
    // Base case: if size is 0 or negative, return 0
    if(size <= 0) {
        return 0;
    }
    // Recursive case: current element + sum of remaining elements
    return arr[0] + s_array(arr + 1, size - 1);
}

// Recursive function to calculate factorial
int factorial(int n) {
    // Base cases
    if(n == 0 || n == 1) {
        return 1;
    }
    // Recursive case: n * factorial(n-1)
    return n * factorial(n - 1);
}