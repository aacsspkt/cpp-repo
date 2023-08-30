#include <iostream>

int main()
{
    /*
    Dynamic memory is memory that is allocated after the program is
    compiled and running. Use the `new` operator to allocate memory
    in the heap rather the stack.

    It is useful when we don't know how much memory we will need. It
    makes our programs more flexible especially when accespting user
    input.
    */

    int *pNum = NULL;

    pNum = new int;

    *pNum = 21;

    std::cout << "address of pNum: " << pNum << "\n";
    std::cout << "value of pNum: " << *pNum << "\n";

    // it is must to release memory after use otherwise it would create 
    // memory leak.
    delete pNum;

    char *pGrades = NULL;
    int size;

    std::cout << "How many grades to enter in?: ";
    std::cin >> size;

    pGrades = new char[size];

    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter grade #" << i + 1 << ": ";
        std::cin >> pGrades[i];
    }

    for (int i = 0; i < size; i++)
    {
        std::cout << pGrades[i] << " ";
    }

    delete[] pGrades;

    return 0;
}