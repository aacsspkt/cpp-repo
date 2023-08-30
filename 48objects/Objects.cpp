#include <iostream>

/*
Object is a collection of attributes and methods.
They can have characteristics and could perform
actions. They can be used to mimic real world items.
(eg. Phone, Book, Dog). They are created from a
class which acts as a "blue-print".
*/

class Human {
    public:
        std::string name = "Rick";
        std::string occupation = "scientist";
        int age = 70;

        void eat() {
            std::cout << "This person is eating\n";
        }

        void drink() {
            std::cout << "This person is drinking\n";
        }

        void sleep() {
            std::cout << "This person is sleeping\n";
        }
};

class Car{
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;

        void accelerate() {
            std::cout << "You step on the accelerator\n";
        }

        void brake() {
            std::cout << "You step on the brakes!\n";
        }
};

int main()
{
    Human human1;
    human1.name = "Bipin";
    human1.occupation = "Scientist";
    human1.age = 25;

    std::cout << human1.name << "\n";
    std::cout << human1.occupation << "\n";
    std::cout << human1.age << "\n";

    human1.eat();
    human1.drink();
    human1.sleep();

    Human human2;
    // human2.name = "Sandeep";
    // human2.occupation = "Professor";
    // human2.age = 40;

    std::cout << human2.name << "\n";
    std::cout << human2.occupation << "\n";
    std::cout << human2.age << "\n";

    human2.eat();
    human2.drink();
    human2.sleep();

    Car car1;

    car1.make = "Ford";
    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "Silver";

    std::cout << car1.make << "\n";
    std::cout << car1.model << "\n";
    std::cout << car1.year << "\n";
    std::cout << car1.color << "\n";

    car1.accelerate();
    car1.brake();

    return 0;
}