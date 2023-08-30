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

struct Car {
    std::string model;
    int year;
    std::string color;
};

void printCar(Car &car);
void paintCar(Car &car, std::string color);

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
    

    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "red";

    car2.model = "Corvette";
    car2.year = 2022;
    car2.color = "blue";

    // struct are passed as value so when we pass struct a copy is passed
    // take a look at address of car1 outside and inside of function.
    // std::cout << &car1 << "\n";
    // printCar(car1);



    // if we want to pass original value then we pass reference    
    std::cout << &car1 << "\n";
    printCar(car1);

    paintCar(car1, "silver");
    paintCar(car2, "gold");

    printCar(car1);
    printCar(car2);


    return 0;
}

// void printCar(Car car) {
//     std::cout << &car << "\n";
//     std::cout << car.model << "\n";
//     std::cout << car.year << "\n";
//     std::cout << car.color << "\n";
// }

void printCar(Car &car) {
    std::cout << &car << "\n";
    std::cout << car.model << "\n";
    std::cout << car.year << "\n";
    std::cout << car.color << "\n";
}

void paintCar(Car &car, std::string color) {
    car.color = color;
}