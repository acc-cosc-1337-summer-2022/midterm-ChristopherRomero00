#include "question3.h"

double get_sales_commission(double sales)
{
    if (sales >= 0 && sales <= 499)
    {
        return sales * .05; 
    }
    else if (sales >= 500 && sales <= 999)
    {
        return sales * .06; 
    }
    else if (sales >= 1000 && sales <= 1499)
    {
        return sales * .07;     
    }
    else if (sales >= 1500)
    {
        return sales * .08;     
    }
    else
    { 
        return 0;
    }
}