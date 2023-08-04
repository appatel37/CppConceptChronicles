#include <iostream>
#include <cstring>
using namespace std;

const int LEN = 20;

struct Course {
    char* courseCode;
    int credits;
};

int main() {
    int numberOfCourses;

    cout << "Enter the number of courses: ";
    cin >> numberOfCourses;

    Course* courses = new Course[numberOfCourses]; // (1) Dynamic memory allocation

    for (int i = 0; i < numberOfCourses; i++) { // (2) Loop for each course
        char code[LEN + 1];

        cout << "Enter a course code: ";
        cin >> code;

        int len = strlen(code);
        courses[i].courseCode = new char[len + 1]; // (3) Dynamic memory allocation for course code
        strcpy(courses[i].courseCode, code); // (4) Setting the course code

        cout << "Enter course credits: ";
        cin >> courses[i].credits; // (5) Getting the course credits
    }

    // Rest of your code...

    // Deallocate memory
    for (int i = 0; i < numberOfCourses; i++) {
        delete[] courses[i].courseCode;
    }
    delete[] courses;

    return 0;
}
