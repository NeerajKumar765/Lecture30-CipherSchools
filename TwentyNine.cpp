#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int attendance;
    float total_marks;

    // Default constructor
    Student() {
        name = "Unknown";
        attendance = 0;
        total_marks = 0.0;
    }

    // Parameterized constructor
    Student(string name, int attendance, float total_marks) {
        this->name = name;
        this->attendance = attendance;
        this->total_marks = total_marks;
    }

    // Copy constructor
    Student(const Student &student) {
        name = student.name;
        attendance = student.attendance;
        total_marks = student.total_marks;
    }

    // Function to display student details
    void display() {
        cout << "Name: " << name << endl;
        cout << "Attendance: " << attendance << endl;
        cout << "Total Marks: " << total_marks << endl;
    }
};

int main() {
    // Creating objects using different constructors
    Student student1; // Default constructor
    Student student2("Alice", 95, 480); // Parameterized constructor
    Student student3 = student2; // Copy constructor

    // Displaying the details of the students
    cout << "Student 1 details:" << endl;
    student1.display();
    
    cout << "Student 2 details:" << endl;
    student2.display();
    
    cout << "Student 3 details (copied from Student 2):" << endl;
    student3.display();

    return 0;
}
