#include <iostream>
#include "../include/sprout.h"


int main()
{
    int UpSpeed, DownSpeed, DesiredHeight;

    std::cout << "UpSpeed: " << std::endl;
    std::cin >> UpSpeed;
    std::cout << "DownSpeed: " << std::endl;
    std::cin >> DownSpeed;
    std::cout << "DesiredHeight: " << std::endl;
    std::cin >> DesiredHeight;

    int result = daysToReachHeight(UpSpeed, DownSpeed, DesiredHeight);

    std::cout << "Result days: " << result << std::endl;

    return 0;
}