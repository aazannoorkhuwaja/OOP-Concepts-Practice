#include <iostream>
using namespace std;

// 1. Define the Point Struct
struct Point {
    int x;
    int y;
};

// Function prototypes
void inputPoints(Point* points, int num_Points);
void translatePoints(Point* points, int num_Points, int dx, int dy);
void print_Points(Point* points, int num_Points);

int main() {
    int num_Points;
    
    // Prompt for number of points
    cout << "Enter the number of points: ";
    cin >> num_Points;
    
    // Dynamically allocate memory for points
    Point* points = new Point[num_Points];
    
    // 2. Operations - Input Data
    inputPoints(points, num_Points);
    
    // Display points before translation
    cout << "\nPoints before translation:\n";
    print_Points(points, num_Points);
    
    // Get translation offsets
    int dx, dy;
    cout << "\nEnter translation offset dx: ";
    cin >> dx;
    cout << "Enter translation offset dy: ";
    cin >> dy;
    
    // Translate points
    translatePoints(points, num_Points, dx, dy);
    
    // Display points after translation
    cout << "\nPoints after translation:\n";
    print_Points(points, num_Points);
    
    // Free allocated memory
    delete[] points;
    
    return 0;
}

// Function to input point data
void inputPoints(Point* points, int num_Points) {
    for(int i = 0; i < num_Points; i++) {
        cout << "Enter coordinates for Point " << i + 1 << ":\n";
        cout << "x: ";
        cin >> points[i].x;
        cout << "y: ";
        cin >> points[i].y;
    }
}

// Function to translate points
void translatePoints(Point* points, int num_Points, int dx, int dy) {
    for(int i = 0; i < num_Points; i++) {
        points[i].x += dx;  // Shift x-coordinate
        points[i].y += dy;  // Shift y-coordinate
    }
}

// Function to print points
void print_Points(Point* points, int num_Points) {
    for(int i = 0; i < num_Points; i++) {
        cout << "Point " << i + 1 << ": (" << points[i].x << ", " << points[i].y << ")\n";
    }
}