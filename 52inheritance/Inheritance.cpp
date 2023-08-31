#include <iostream>
/*
Inheritance: A class can recieve attrubutes and methods
            from another class. Children class inherit
            from a parent class. Helps to reuse similar
            found within multiple classes.
*/

class Animal
{
public:
    bool alive = true;

    void eat()
    {
        std::cout << "This animal is eating\n";
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        std::cout << "This dog goes woof!\n";
    }
};

class Cat : public Animal
{
public:
    void meow()
    {
        std::cout << "The cat goes meow!\n";
    }
};

class Shape
{
public:
    double area;
    double volume;
};

class Cube : public Shape
{
public:
    double side;

    Cube(double side)
    {
        this->side = side;
        this->area = side * side * 6;
        this->volume = side * side * side;
    }
};

class Sphere : public Shape
{
public:
    double radius;

    Sphere(double radius)
    {
        this->radius = radius;
        this->area = 3.14159 * (radius * radius);
        this->volume = (4 / 3.0) * 3.14159 * (radius * radius * radius);
    }
};

int main()
{

    // here Dog inherits from Animal class
    Dog dog;
    Cat cat;

    std::cout << dog.alive << "\n";
    dog.eat();
    dog.bark();

    cat.eat();
    cat.meow();


    Cube cube(10);

    std::cout << "Area of cube: " << cube.area << "\n";
    std::cout << "Volume of cube: " << cube.volume << "\n";

    Sphere sphere(5);

    std::cout << "Area of sphere: " << sphere.area << "\n";
    std::cout << "Volume of sphere: " << sphere.volume << "\n";

    return 0;
}