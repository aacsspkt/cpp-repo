#include <iostream>

int main() {
    std::string name;
    int age;

    std::cout << "What's your age?: ";
    std::cin >> age;

    std::cout << "What's your name?: ";
    
    std::getline(std::cin >> std::ws, name); 
    // something is wrong with c++ intellisense. code compiles and runs fine so, ignore error
    // getline method is used for fetching input with white spaces. '>> std::ws' will eliminate
    // any white space or new line character before any user input 
    
    std::cout << "Hello " << name << "!\n";
    std::cout << "Your are " << age << " years old.";

    return 0;
}