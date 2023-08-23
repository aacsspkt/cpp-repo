#include <iostream>

/*
type conversions is converting a value of one data type to another type
implicit = automatic
explicit = predede value with new data type such as: (int) 3.14
*/

int main() {
    // implicit
    int x = 3.14;
    std::cout << x << " is trucated value due to implicit type cast\n";

    // this will explicit convert 23.323 to 23 and assign it double y.
    double y = (int) 23.323;
    std::cout << y << " is also truncated due to explicit type cast\n";

    // here x in implicitly converted char according to ascii table
    char d = 100;
    std::cout << d << "\n";
    // explicit conversion
    std::cout << (char) 100 << "\n";

    // example usage
    int correct = 8;
    int questions = 10;
    double score = correct / (double) questions * 100;
    std::cout << score << "%\n";


    return 0;
}