#include <iostream>
#include <vector>
#include <cmath>

int main()
{
    std::cout << "Welcome to UNFRENDLY interface!\n";
    int yy1, yy2, mm1, mm2, ans, dd1, dd2, days;
    char x;
    std::cout << "Enter your birthday (DD:MM:YY format): ";
    std::cin >> dd1 >> x >> mm1 >> x >> yy1;
    std::cout << "Enter today's date (DD:MM:YY format): ";
    std::cin >> dd2 >> x >> mm2 >> x >> yy2;
    days = (yy2 - yy1) * 360 + (mm2 - mm1 - 1) * 30;
    if (mm1 == mm2 && yy1 == yy2) days += dd2 - dd1;
    else days += dd2 + (30 - dd1);
    //std::cout << days << "\n";
    std::cout << days / 360 << "\n";
    return 0;
}