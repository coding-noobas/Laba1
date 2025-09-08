#include <iostream>
#include <vector>

int main()
{
    int a = 0;
    std::cout << "Enter number from 3 digits: ";
    std::cin >> a;
    if (a < 100 || a >= 1000) {
        std::cout << "Number must be 3 digits, try again: ";
        std::cin >> a;
        if (a < 100 || a >= 1000) {
            while (a < 100 || a >= 1000) {
                std::cout << "Bespolezno\n";
                std::cin >> a;
            }
        }
    }
    std::cout << "Sum: " << a / 100 + (a / 10) % 10 + a % 10 << "\n" << "Product: " << (a / 100) * ((a / 10) % 10) * (a % 10) << "\n";
    return 0;
}