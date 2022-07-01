#include<iostream>
#include<iomanip>

using std::cout;
using std::cin;
using std::fixed;
using std::setprecision;

class Receipt
{
private:

    const double tax = 0.08; 
    double gratuity;
    double price;

public:
    Receipt(double meal_price, double tip_rate);
    double calculate_tax();
    double calculate_gratuity();
    double display_receipt();
    
};
