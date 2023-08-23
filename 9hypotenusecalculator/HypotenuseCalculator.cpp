#include <iostream>6
#include <cmath>

int main() {
    double a;
    double b;

    std::cout << "Enter side A: ";
    std::cin >> a;

    std::cout << "Enter side B: ";
    std::cin >> b;

    double c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "Side C: " << c;

    return 0;
}