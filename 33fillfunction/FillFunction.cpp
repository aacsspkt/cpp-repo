#include <iostream>



int main()
{
    // fill() = fills a range of elements with a specified value
    // syntax = fill(begin, end, value)

    const int SIZE = 10;
    
    std::string foods[SIZE];

    fill(foods, foods + (SIZE / 2), "pizza");
    fill(foods + (SIZE / 2), foods + SIZE, "hamburger");

    for(std::string food: foods) {
        std::cout << food << "\n";
    }

    return 0;
}