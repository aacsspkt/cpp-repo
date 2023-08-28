#include <iostream>

int searchNumArray(int array[], int size, int element);
int searchStringArray(std::string array[], int size, std::string element);

int main()
{
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers)/sizeof(numbers[0]);

    int index;
    int myNum;

    std::cout << "Enter element to search for:\n";
    std::cin >> myNum;

    index = searchNumArray(numbers, size, myNum);

    if(index != -1) {
        std::cout << myNum << " is at index " << index << "\n";
    } else {
        std::cout << myNum << " is not in the array\n";
    }

    std::cout << "\n";
    std::cin.clear();
    fflush(stdin);

    std::string foods[] = {"pizza", "hamburger", "hotdog"};
    int size1 = sizeof(foods)/sizeof(foods[0]);

    int index1;
    std::string myFood;

    std::cout << "Enter element to search for:\n";
    std::getline(std::cin >> std::ws, myFood);

    index1 = searchStringArray(foods, size1, myFood);

    if(index != -1) {
        std::cout << myFood << " is at index " << index1;
    } else {
        std::cout << myFood << " is not in the array\n";
    }

    return 0;
}

int searchNumArray(int array[], int size, int element) {
    for(int i = 0; i < size; i++) {
        if (array[i] == element) {
            return i;
        }
    }

    return -1;
}

int searchStringArray(std::string array[], int size, std::string element) {
    for(int i = 0; i < size; i++) {
        if (array[i] == element) {
            return i;
        }
    }

    return -1;
}