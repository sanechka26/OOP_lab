#include "../include/sprout.h"

int daysToReachHeight(int UpSpeed, int DownSpeed, int DesiredHeight)
{
    int day = 0, height = 0;

    while (height < DesiredHeight)
    {
        day++;
        height += UpSpeed;

        std::cout << "After day -> " << day << " " << height << std::endl;
        
        if (height >= DesiredHeight)
        {
            return day;
        }
        
        height -= DownSpeed;
        std::cout << "After night -> " << day << " " << height << std::endl;
    }

    return day;
}