#include <iostream>

int main() {
    std::string students[] = {"Ashish", "Sandeep", "Manjil", "Tej"};

    for (int i = 0; i < sizeof(students)/sizeof(std::string); i++) {
        std::cout << students[i] << "\n";
    }

    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    for (int i = 0; i < sizeof(grades)/sizeof(char); i++) {
        std::cout << grades[i] << "\n";
    }

    // using foreach loop
    for(std::string student: students) {
        std::cout << student << "\n";
    }

    int numGrades[] {65, 72, 81, 93};

    for (int grade: numGrades) {
        std::cout << grade << "\n";
    }
}