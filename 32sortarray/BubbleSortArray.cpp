#include <iostream>

void sortAsc(int array[], int size);
void sortDesc(int array[], int size);

int main() {
    int array[] = {10, 1, 9, 2, 8, 7, 3, 5, 4, 6};
    int size = sizeof(array)/sizeof(array[0]);

    sortAsc(array, size);

    for (int element: array) {
        std::cout << element << " ";
    }

    std::cout << "\n";

    sortDesc(array, size);

    for (int element: array) {
        std::cout << element << " ";
    }

    return 0;
}

void sortAsc(int array[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j]= array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void sortDesc(int array[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] < array[j + 1]) {
                temp = array[j];
                array[j]= array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}