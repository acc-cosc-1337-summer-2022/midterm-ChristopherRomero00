#include "question4.h"
//
bool test_config()
{
    return true;
}

int get_earned_points(int sold)
{
    int points = 0;

    if (sold >= 1 && sold <= 5)
    {
        points = sold * 1;
        return points;
    }
    else if(sold >= 6 && sold <= 10)
    {
        points = sold * 5;
        return points;
    }
    else if(sold >= 11 && sold <= 15)
    {
        points = sold * 10;
        return points;
    }
    else if(sold >= 16)
    {
        points = sold * 15;
        return points;
    }
    return points;
}