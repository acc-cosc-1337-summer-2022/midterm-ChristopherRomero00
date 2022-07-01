#include "question3.h"
#include<iostream>

using std::cout;
using std::cin;

int main()
{   
    char choice;
    do
    {
        double sales = 0;
        double percSalesPay = 0.0;

        cout<<"\nEnter amount of sales: ";
        cin>>sales;
        
        percSalesPay = get_sales_commission(sales);
        cout<<"Sales of "<<sales<<" yields a commission of "<<percSalesPay<<".";

        cout<<"\n\n(Y/N) Do you wish to continue? ";
        cin>>choice;
        while(choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n')
        {
            cout<<"Invalid choice! Type 'Y' to continue or 'N' to end program: ";
            cin>>choice;
        }
        cout<<"------------------------------------";
        
    } while (choice == 'Y' || choice == 'y');
}