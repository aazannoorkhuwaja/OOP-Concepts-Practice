#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function prototypes
void displayMatrix(int** matrix, int n);
int sumMainDiagonal(int** matrix, int n);
int sumSecondaryDiagonal(int** matrix, int n);
int absoluteDifference(int a, int b);

int main() {
    int n;
    
    // Prompt user for matrix size
    cout << "Enter the size of the matrix (n x n): ";
    cin >> n;
    
    // Seed random number generator
    srand(time(0));
    
    // 1. Matrix Allocation & Initialization
    // Dynamically allocate memory for 2D array
    int** matrix = new int*[n];
    for(int i = 0; i < n; i++) {
        matrix[i] = new int[n];
    }
    
    // Fill matrix with random values between 1 and 100
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            matrix[i][j] = (rand() % 100) + 1;
        }
    }
    
    // 2 & 3. Matrix Operations and Output
    cout << "\nThe Matrix:" << endl;
    displayMatrix(matrix, n);
    
    int mainDiagSum = sumMainDiagonal(matrix, n);
    int secDiagSum = sumSecondaryDiagonal(matrix, n);
    
    cout << "\nSum of main diagonal: " << mainDiagSum << endl;
    cout << "Sum of secondary diagonal: " << secDiagSum << endl;
    cout << "Absolute difference of diagonals: " << absoluteDifference(mainDiagSum, secDiagSum) << endl;
    
    // Free allocated memory
    for(int i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
    
    return 0;
}

// Function to display matrix
void displayMatrix(int** matrix, int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

// Function to calculate sum of main diagonal (top-left to bottom-right)
int sumMainDiagonal(int** matrix, int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }
    return sum;
}

// Function to calculate sum of secondary diagonal (top-right to bottom-left)
int sumSecondaryDiagonal(int** matrix, int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += matrix[i][n-1-i];
    }
    return sum;
}

// Function to calculate absolute difference
int absoluteDifference(int a, int b) {
    int diff = a - b;
    if(diff < 0) {
        return -diff;
    }
    return diff;
}