#include <iostream>

/*
constructor is special method that is automatically called when
an object is instantiated. It is useful for assigning values to
attributes as arguments.
*/

class Student
{
public:
    std::string name;
    int age;
    double gpa;

    Student(std::string name, int age, double gpa)
    {
        // if arguments name are different than class members name
        // then members can be assigned withou using this keyword.
        // eg. name = x;
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};

class Car
{
public:
    std::string make;
    std::string model;
    int year;
    std::string color;

    Car(std::string make, std::string model, int year, std::string color)
    {
        this->make = make;
        this->model = model;
        this->year = year;
        this->color = color;
    }
};

int main()
{
    Student students1("Spongebob", 25, 3.2);
    Student students2("Patrick", 24, 3.1);
    Student students3("Sandy", 21, 3.6);

    std::cout << students1.name << "\n";
    std::cout << students1.age << "\n";
    std::cout << students1.gpa << "\n";

    std::cout << students2.name << "\n";
    std::cout << students2.age << "\n";
    std::cout << students2.gpa << "\n";

    std::cout << students3.name << "\n";
    std::cout << students3.age << "\n";
    std::cout << students3.gpa << "\n";

    Car car1("Chevy", "Corvette", 2022, "blue");

    std::cout << car1.make << "\n";
    std::cout << car1.model << "\n";
    std::cout << car1.year << "\n";
    std::cout << car1.color << "\n";

    return 0;
}