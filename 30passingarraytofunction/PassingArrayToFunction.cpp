#include <iostream>

double getTotal(double prices[], int size);

int main()
{
    double prices[] = {49.99, 15.05, 28.28, 91.32, 7.18};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, size);

    std::cout << "$" << total;


    return 0;
}


/*
when we pass an array to a function it decays into what's known as a pointer
so the function won't have any idea how big the array is. Hence, we pass size
as parameter into the function
*/
double getTotal(double prices[], int size) {
    double total = 0;
    
    for(int i = 0; i< size; i++) {
        total+= prices[i];
    }
    
    return total;
}