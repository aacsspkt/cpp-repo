#include <iostream>

int main() {
    std::cout << "variable declaration and assignment:\n";

    int a; // declaration
    a = 5; // assignment

    int b = 8; // declaration and assigment at same time

    int sum = a + b;

    std::cout << "Value of a is " << a << std::endl;
    std::cout << "Value of b is " << b << std::endl; 
    std::cout << "Sum of a and b is " << sum << std::endl;

    std::cout << "int:\n";

    /*
    int can be assigned whole number such as
    */ 
    
    int age = 24; 
    int year = 2023;
    int days = 7;

    /*
    int will truncate value if floating number is 
    assigned to it such as 
    here value of month will be trucated
    */
    int month = 30.3;
    std::cout << "Value is trucated from 30.3 to " << month << std::endl;
    
    std::cout << "double:\n";
    /*
    double is number including decimals such as
    */ 
    
    double price = 10.99;
    double gpa = 3.4;
    double temperature = 90.5;

    std::cout << "price: " << price << std::endl ;
    /*
    and it is not truncated
    */

    std::cout << "Value of price is not trucated: " << price << std::endl;

    std::cout << "char:\n";

    /*
    char can have single character
    */

    char grade = 'A';
    char initial = 'B';
    char dollarSign = '$';

    std::cout << "grade: " << grade << std::endl;


    std::cout << "boolean:\n";
    // bool can be either true or false;
    bool t = true;
    bool f = false;

    std::cout << "when printed, bool can be either " << t << " for true " << " or " << f << " for false\n";

    std::cout << "string:\n";
    std::string name = "Aacs Spkt";
    std::string day = "Friday";
    std::string food = "Pizza";

    std::cout << "name: " << name << std::endl;
}