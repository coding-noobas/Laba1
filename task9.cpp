#include <iostream>
#include <vector>
#include <cmath>

int main()
{
    std::cout << "Welcome to UNFRENDLY interface!\n";
    int hh1, hh2, mm1, mm2, ans;
    char x;
    std::cout << "Enter your arrival time (HH:MM format): ";
    std::cin >> hh1 >> x >> mm1;
    std::cout << "Enter departure time (HH:MM format): ";
    std::cin >> hh2 >> x >> mm2;
    if (hh2 < hh1) {
        ans = (24 - hh1 - 1) * 60 + (60 - mm1) + hh2 * 60 + mm2;
    }
    else {
        if (hh2 == hh1) ans = mm2 - mm1;
        else ans = (hh2 - hh1 - 1) * 60 + mm2 + (60 - mm1);
    }
    std::cout << "Total time: " << ans << " minutes" << "\n";
    return 0;
}