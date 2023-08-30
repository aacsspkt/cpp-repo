#include <iostream>

void walk(int steps);
int factorial(int num);

int main()
{
    /*
    Recursion is a programming technique where a function invokes itself from within.
    It breaks a complex concept into a repeatable single step.

    (iterative vs recursive)
    advantage =     less code and is cleaner
                    useful for sorting and searching algorithms

    disadvantages = uses more memory
                    slower
    */

    walk(50);

    std::cout << "\n";

    int num = 10;
    std::cout << "Factorial of " << num << " is " << factorial(num);
    return 0;
}

void walk(int steps)
{
    // iterative approach
    // for (int i = 0; i < steps; i++) {
    //     std::cout << "You take a step\n";
    // }

    // recursive approach
    if (steps > 0)
    {
        std::cout << "You take a step\n";
        walk(steps - 1);
    }
}

int factorial(int num)
{
    // // iterative approach
    // int result = 1;

    // for (int i = 1; i <= num; i++)
    // {
    //     result = result * i;
    // }

    // return result;

    // // recursive approach

    if (num > 1)
    {
        return num * factorial(num - 1);
    }
    else
    {
        return 1;
    }
}
