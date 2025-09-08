#include <iostream>
#include <vector>

int main()
{
    int a = 0;
    std::cout << "Enter length: ";
    std::cin >> a;
    if (a <= 0) {
        std::cout << "Length must be more than 0, try again: ";
        std::cin >> a;
        if (a <= 0) {
            while (a <= 0) {
                std::cout << "Bespolezno\n";
                std::cin >> a;
            }
        }
    }
    std::cout << "P = " << a * 4 << "\nS = " << a * a << "\n";
    return 0;
}