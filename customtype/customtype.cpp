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

int main() {
    pairlist_t pairlist;

    text_t text = "This is jibrissfasdfa";
    number_t num = 33;

    std::cout << text << "\n";
    std::cout << num << "\n";
}