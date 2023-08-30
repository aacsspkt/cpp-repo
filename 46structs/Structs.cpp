#include <iostream>
/*
A struct is a structure that group related variables under one name.
It can contain many different data types (string, int, double, bool, etc.)
Variables in struct are known as "members".
Members can be access with . "Class Member Access Operator"
*/

struct Student {
    std::string name;
    double gpa;
    bool enrolled = true;
};

int main()
{
    Student student;
    student.name = "Spongebob";
    student.gpa = 3.2;

    std::cout << student.name << "\n";
    std::cout << student.gpa << "\n";
    std::cout << student.enrolled << "\n";
    
    Student student1;
    student1.name = "Patrick";
    student1.gpa = 2.1;

    std::cout << student1.name << "\n";
    std::cout << student1.gpa << "\n";
    std::cout << student1.enrolled << "\n";

    Student student2;
    student2.name = "Squidward";
    student2.gpa = 1.5;
    student2.enrolled = false;

    std::cout << student2.name << "\n";
    std::cout << student2.gpa << "\n";
    std::cout << student2.enrolled << "\n";
    
    return 0;
}