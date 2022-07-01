#include "question1.h"

Receipt::Receipt(double meal_price, double tip_rate)
{
    price = meal_price;
    gratuity = tip_rate / 100;

}

double Receipt::calculate_tax()
{
    return price * tax;
}

double Receipt::calculate_gratuity()
{
    return price * gratuity;
}

double Receipt::display_receipt()
{
    double taxAmount = calculate_tax();
    double gratuityAmount = calculate_gratuity();

    double total = price + taxAmount + gratuityAmount;

    cout<<fixed<<setprecision(2);

    cout<<"\nThe meal amount is: "<<price<<"\n";
    cout<<"The tax amount is : "<<taxAmount<<"\n";
    cout<<"The expected gratuity: "<<gratuityAmount<<"\n";
    cout<<"The total amount is: "<<total<<"\n";

    return total;
}
