#include <iostream>

int main() {
    /*
    Arithmatic operators return the result of a specific arithematic operation (+ - * /)
    */

    int students = 20;

    std::cout << "current value:" << students << "\n";

    // add operator: '+'
    students = students + 2;
    // another way of adding
    students+=2;
    // increment operator can be used only for adding 1; often used in loops 
    students++;
    std::cout << "value after adding: " << students << "\n";

    // substract operator: '-'
    students = students - 2;
    // another way of substracting
    students+=2;
    // decrement operator will substract only 1
    students--;
    std::cout << "value after substracting: " << students << "\n";


    // multipy operator: '*'
    students = students * 2;
    // another way
    students*=2;
    std::cout << "value after multiplying: " << students << "\n";

    // divide operator: '/'
    students = students / 2;
    // another way
    students/=2;
    std::cout << "value after dividing: " << students << "\n";
    

    // modulus operator: '%'

    int remainder = students % 5;

    std::cout << "remainder:" << remainder << "\n";

    // operations happens in this order:
    // parenthesis
    // multiplication & division
    // addition & substraction

    students = 6 - (5 + 4) * 3 / 2;

    std::cout << "students: " << students << "\n";
    
    return 0;
}