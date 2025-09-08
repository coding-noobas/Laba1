#include <iostream>
#include <vector>
#include <cmath>

int main()
{
    std::cout << "Welcome to UNFRENDLY interface!\n";
    long double length = 0, pi = acos(-1);
    std::cout << "Enter length: ";
    std::cin >> length;
    while (length <= 0) {
        std::cout << "TRY AGAIN!!!\n";
        std::cin >> length;
    }
    std::cout << "Radius: " << length / (2.0 * pi) << "\n";
    std::cout << "Square: " << (length / (2.0 * pi)) * (length / (2.0 * pi)) * pi << "\n";
    return 0;
}
