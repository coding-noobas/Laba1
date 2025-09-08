#include <iostream>
#include <vector>
#include <cmath>

int main()
{
    std::cout << "Welcome to UNFRENDLY interface!\n";
    std::pair <long double, long double> p1, p2, p3;
    long double a, b, c, per, s;
    std::cout << "Enter first point: ";
    std::cin >> p1.first >> p1.second;
    std::cout << "Enter second point: ";
    std::cin >> p2.first >> p2.second;
    std::cout << "Enter third point: ";
    std::cin >> p3.first >> p3.second;
    a = sqrt((p1.first - p2.first) * (p1.first - p2.first) + (p1.second - p2.second) * (p1.second - p2.second));
    b = sqrt((p3.first - p2.first) * (p3.first - p2.first) + (p3.second - p2.second) * (p3.second - p2.second));
    c = sqrt((p1.first - p3.first) * (p1.first - p3.first) + (p1.second - p3.second) * (p1.second - p3.second));
    per = a + b + c;
    s = sqrt(per / 2 * (per / 2 - a) * (per / 2 - b) * (per / 2 - c));
    std::cout << "Perimeter: " << per << "\n" << "Square: " << s << "\n";
    return 0;
}