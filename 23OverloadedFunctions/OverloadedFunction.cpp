#include <iostream>

/*
It is function can have same name but different parameter.
A function with its parameter is known as function signature.
Each function signature must be unique.
*/

void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);

int main() {
    bakePizza();
    bakePizza("pepperoni");
    bakePizza("pepperoni", "mushroom");
}

void bakePizza() {
    std::cout << "Here is your pizza\n";
}

void bakePizza(std::string topping1) {
    std::cout << "Here is your " << topping1 << " pizza\n";
}

void bakePizza(std::string topping1, std::string topping2) {
    std::cout << "Here is your " << topping1 << " and " << topping2 << " pizza\n";
}