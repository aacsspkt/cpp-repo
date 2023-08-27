#include <iostream>

/*
A function is block of reusable code
*/

/*
Many people declare and define their function
after main function because it's readable that way.
But there one issue with this. Our programs are write
from top down. Since, we are invoking function before 
we even know what it is, the compiler won't recognize 
it. The solution to this is, you can declare the functions
before main but define them later. 
*/

/*
Think of main function as a house. Functions outside of 
the main function would be neighbour. Functions can't see
what's going on other functions. In order to make happyBirthday
function aware of variable in main function you can pass it as
an argument.
*/
void happyBirthday(std::string name, int age);

int main() {
    std::string name = "Ashish";
    int age = 24;

    happyBirthday(name, age);

    return 0;
}

void happyBirthday(std::string name, int age) {
    std::cout << "Happy birthday to " << name << "\n";
    std::cout << "Happy birthday to " << name << "\n";
    std::cout << "Happy birthday to dear " << name << "\n";
    std::cout << "Happy birthday to " << name << "\n";
    std::cout << "You are " << age << " years old!\n";
}