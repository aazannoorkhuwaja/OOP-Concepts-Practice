#include<iostream>
#include<string>
using namespace std;

class Professor {
    string professor_name;
    int employee_id;
public:
    Professor(string name, int id) : professor_name(name), employee_id(id) {}

    void display_professor() {
        cout << "Professor Name: " << professor_name << ", Employee ID: " << employee_id << endl;
    }
};

class Student; 

class Course {
    string course_title;
    string course_code;
    Professor* prof;
    Student* students[30];
    int student_count;
    string hidden_notes;
    float course_stars;

public:
    Course(string title, string code, Professor* p) : course_title(title), course_code(code), prof(p), student_count(0) {
        hidden_notes = "Internal: Focus on research papers.";
        course_stars = 4.6;
    }

    void assign_professor(Professor* p) {
        prof = p;
    }

    void enroll_student(Student* s) {
        if (student_count < 30) {
            students[student_count++] = s;
        }
    }

    void show_course() {
        cout << "Course Title: " << course_title << ", Course Code: " << course_code << endl;
        if (prof != nullptr) {
            prof->display_professor();
        } else {
            cout << "No Professor assigned yet.\n";
        }
        cout << "Total Students Enrolled: " << student_count << endl;
    }

    friend class Student;
};

class Student {
    string student_name;
    int roll_number;

public:
    Student(string name, int roll) : student_name(name), roll_number(roll) {}

    void view_course_details(Course &c) {
        cout << "\nStudent View" << endl;
        cout << "Course Title: " << c.course_title << ", Course Code: " << c.course_code << endl;
        cout << "Internal Notes: " << c.hidden_notes << endl;
        cout << "Course Rating: " << c.course_stars << " stars" << endl;
    }
};

int main() {
    Professor prof1("Dr. Sarah", 501);
    Professor prof2("Dr. Malik", 502);

    Course course1("Data Structures", "CS201", &prof1);
    Course course2("Database Systems", "CS301", &prof2);

    Student student1("Alice", 1001);
    Student student2("Bob", 1002);

    course1.enroll_student(&student1);
    course1.enroll_student(&student2);

    course2.enroll_student(&student1);

    cout << "Course 1 Details:" << endl;
    course1.show_course();

    cout << "\nCourse 2 Details:" << endl;
    course2.show_course();
    cout << "\nStudent Accessing Course Details:" << endl;
    student1.view_course_details(course1);
    student2.view_course_details(course2);

    return 0;
}