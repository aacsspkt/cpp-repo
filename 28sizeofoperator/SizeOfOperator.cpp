#include <iostream>

int main()
{
    
    // sizeof() determines the size in bytes of a:
    // variable, data type, class, objects, etc.

    double gpa = 2.5;
    std::cout << sizeof(gpa) << " bytes\n";

    char grade = 'F';
    std::cout << sizeof(grade) << " bytes\n";

    std::string name = "Ashish";
    std::cout << sizeof(name) << " bytes\n";
    
    char grades[] = {'A', 'B', 'C', 'D', 'E'};
    std::cout << sizeof(grades) << " bytes\n";

    std::string students[] = {"Spongebob", "Patrick", "Squidward"};
    std::cout << sizeof(students)/sizeof(std::string) << " elements\n";
    
    return 0;
}