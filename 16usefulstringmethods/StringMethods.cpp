#include <iostream>

int main() {
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if (name.empty()) {
        std::cout << "You didn't your name";
        return 0;        
    } else if (name.length() > 20) {
        std::cout << "Your name cannot be 20 character long";
    } else {
        std::cout << "Welcome " << name << "!\n";
    }

    // at method returns value at given index
    std::cout << name.at(0) << "\n";

    // insert inserts given value at given index
    name.insert(0, "@");
    std::cout << name << "\n";

    // find returns index of given char
    std::cout << name.find(' ') << "\n";

    // append to end of value
    name.append("@gmail.com");
    std::cout << "Your username is now " << name << "\n"; 

    // erase removes char within given index
    name.erase(0, 3);
    std::cout << name << "\n";

    // clear the value
    name.clear();
    std::cout << "Hello " << name << "\n";

    return 0;
}