#include <iostream>

/*
    Enums are a user-defined data type that consists of
    paired named-integer constants. It's great if you
    have a set of potential options.
*/

enum Day
{
    Sunday = 0,
    Monday = 1,
    Tuesday = 2,
    Wednesday = 3,
    Thursday = 4,
    Friday = 5,
    Saturnday = 6
};

enum Flavor
{
    Vanilla,
    Chocolate,
    Strawberry,
    Mint
};

enum Color
{
    Red,
    Orange,
    Yellow,
    Green,
    Blue,
    Purple
};

int main()
{

    Day today = Sunday;

    switch (today)
    {
    case Sunday:
        std::cout << "It's Sunday!\n";
        break;
    case Monday:
        std::cout << "It's Sunday!\n";
        break;
    case Tuesday:
        std::cout << "It's Sunday!\n";
        break;
    case Wednesday:
        std::cout << "It's Sunday!\n";
        break;
    case Thursday:
        std::cout << "It's Sunday!\n";
        break;
    case Friday:
        std::cout << "It's Sunday!\n";
        break;
    case Saturnday:
        std::cout << "It's Sunday!\n";
        break;
    }
    return 0;
}