#include <iostream>
#include <cmath>


int main() {
    double x = 3;
    double y = 4;

    double z;

    z = std::max(x, y);
    std::cout << "max value between " << x << " and " << y << " is: " << z << "\n";

    z = std::min(x, y);
    std::cout << "min value between " << x << " and " << y << " is: " << z << "\n";

    double power = pow(2, 3);
    std::cout << "2 exponentiated by 3 is " << power << "\n";

    double squareRoot = sqrt(9);
    std::cout << "square root of 9 is " << squareRoot << "\n";

    double absolute = abs(-3);
    std::cout << "absolute value of -3 is " << absolute << "\n";

    double rounded = round(3.14);
    std::cout << "rounded value of 3.14 is " << rounded << "\n";

    double ceiling = ceil(3.14);
    std::cout << "ceiling value of 3.14 is " << ceiling << "\n";

    double floored = floor(3.14);
    std::cout << "floor value of 3.14 is " << floored << "\n";

    return 0;
}