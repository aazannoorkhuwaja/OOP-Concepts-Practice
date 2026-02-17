#include <iostream>
#include <cstring>
using namespace std;

// 1. Define the Student Struct
struct Student {
    char name[50];
    int numSubjects;
    float* scores;
};

// Function prototypes
void inputStudentData(Student* students, int numStudents);
float calculateAverage(Student student);
void sortByAverage(Student* students, int numStudents);
void displayResults(Student* students, int numStudents);

int main() {
    int numStudents;
    
    // Prompt for number of students
    cout << "Enter the number of students: ";
    cin >> numStudents;
    
    // Dynamically allocate array of students
    Student* students = new Student[numStudents];
    
    // 2. Input student data
    inputStudentData(students, numStudents);
    
    // Sort students by average
    sortByAverage(students, numStudents);
    
    // 3. Display results
    displayResults(students, numStudents);
    
    // Free allocated memory
    for(int i = 0; i < numStudents; i++) {
        delete[] students[i].scores;
    }
    delete[] students;
    
    return 0;
}

// Function to input student data
void inputStudentData(Student* students, int numStudents) {
    for(int i = 0; i < numStudents; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        cout << "Enter name: ";
        cin.ignore(1, '\n');  // Clear buffer
        cin.getline(students[i].name, 50);
        
        cout << "Enter number of subjects: ";
        cin >> students[i].numSubjects;
        
        // Dynamically allocate scores array
        students[i].scores = new float[students[i].numSubjects];
        
        // Input scores
        for(int j = 0; j < students[i].numSubjects; j++) {
            cout << "Enter score " << j + 1 << ": ";
            cin >> students[i].scores[j];
        }
    }
}

// Function to calculate average score
float calculateAverage(Student student) {
    float sum = 0;
    for(int i = 0; i < student.numSubjects; i++) {
        sum += student.scores[i];
    }
    return sum / student.numSubjects;
}

// Function to sort students by average (descending order - bubble sort)
void sortByAverage(Student* students, int numStudents) {
    for(int i = 0; i < numStudents - 1; i++) {
        for(int j = 0; j < numStudents - i - 1; j++) {
            if(calculateAverage(students[j]) < calculateAverage(students[j + 1])) {
                // Swap students
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

// Function to display results
void displayResults(Student* students, int numStudents) {
    cout << "\nStudent Results (sorted by average):\n";
    cout << "----------------------------------------\n";
    for(int i = 0; i < numStudents; i++) {
        float avg = calculateAverage(students[i]);
        cout << "Name: " << students[i].name << "\n";
        cout << "Average Score: " << avg << "\n\n";
    }
    
    // Display student with highest average (first after sorting)
    cout << "Top Performing Student:\n";
    cout << "Name: " << students[0].name << "\n";
    cout << "Average Score: " << calculateAverage(students[0]) << "\n";
}