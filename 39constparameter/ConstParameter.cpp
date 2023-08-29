#include <iostream>

/*
const parameter is parameter that is effectively readonly.
Code is more secure & conveys intent useful for refereces and
pointers.
*/

void printInfo(const std::string &name, const int &age);

int main()
{
    std::string name = "Ashish";
    int age = 21;

    printInfo(name, age);

    return 0;
}

void printInfo(const std::string &name, const int &age) {
    
    // will throw error because const paramter is readonly.
    // name = " ";
    // age = 0;
    std::cout << name << "\n";
    std::cout << age << "\ n";
}