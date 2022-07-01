#include<iostream>
#include "question4.h"

using std::cout;
using std::cin;

int main()
{
    int sold = 0;
    int pointsEarned = 0;
    char choice;

    do
    {
        cout<<"\nEnter the Number of widgets sold: ";
        cin>>sold;
        while(sold < 0)
        {
            cout<<"Invalid Number! Enter a positive number! ";
            cout<<"\n\nEnter the Number of widgets sold: ";
            cin>>sold;
        }

        pointsEarned = get_earned_points(sold);
        cout<<"Points Earned "<<pointsEarned<<"\n";
        
        cout<<"------------------------------------";
        cout<<"\n(Y/N) Do you want to continue? ";
        cin>>choice;
        while(choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n')
        {
            cout<<"Invalid choice! Type 'Y' to continue or 'N' to end program: ";
            cin>>choice;
        }
        cout<<"------------------------------------";

    } while (choice == 'Y' || choice == 'y');
    

    return 0;
}