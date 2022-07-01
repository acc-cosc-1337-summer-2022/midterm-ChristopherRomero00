#include "question1.h"

int main()
{
    double meal_price = 0.0;
    double tip_rate = 0.0;
    char choice;

    do
    {  
        cout<<"\nEnter the meal price: ";
        cin>>meal_price;
        while(meal_price < 0)
        {
            cout<<"Invalid Number! Enter a positive meal price: ";
            cin>>meal_price;
        }
        
        cout<<"Enter the tip rate: %";
        cin>>tip_rate;
        while(tip_rate < 0)
        {
            cout<<"Invalid Number! Enter a positive tip rate: %";
            cin>>tip_rate;
        }
    
        Receipt myReceipt(meal_price, tip_rate); 
        myReceipt.display_receipt();
        
        cout<<"------------------------------------";
        cout<<"\n(Y/N) Do you want to continue? ";
        cin>>choice;
        while(choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n')
        {
            cout<<"Invalid choice! Type 'Y' to continue or 'N' to end the program: ";
            cin>>choice;
        }
        cout<<"------------------------------------";

    } while (choice == 'Y' || choice == 'y');
    
    return 0;
}