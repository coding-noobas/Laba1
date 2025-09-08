#include <iostream>
#include <vector>
#include <cmath>

int main()
{
    std::cout << "Welcome to UNFRENDLY interface!\n";
    long double square = 0, pi = acos(-1);
    std::cout << "Enter square: ";
    std::cin >> square;
    while (square <= 0) {
        std::cout << "TRY AGAIN!!!\n";
        std::cin >> square;
    }
    std::cout << "Length: " << sqrt(square / pi) * 2.0 * pi << "\n";
    std::cout << "Diameter: " << sqrt(square / pi) * 2.0 << "\n";
    return 0;
}