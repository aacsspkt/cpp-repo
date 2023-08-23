#include <iostream>
#include <vector>

/*
typedef is a reserved keyword used to create an additional name
(alias) for another data type. New identifier for an existing type
helps with readablity and reduces types
*/
typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
typedef int number_t;

/*
another way of defining alias is using 'using' keyword which is popular nowadays
*/
using another_text_t = std::string;
using another_number_t = int;

int main() {
    pairlist_t pairlist;

    text_t text = "This is jibrissfasdfa";
    number_t num = 33;

    std::cout << text << "\n";
    std::cout << num << "\n";


    another_text_t name = "Aacs Spkt";
    another_number_t age = 24;

    std::cout << name << "\n";
    std::cout << age << "\n";
}