#include "question2.h"

#include<iostream>
using std::cout;
using std::cin;

int main()
{
    char choice = 'y';
    double mass = 0;
    double velocity = 0;

    do
    {
        double kE = 0;
        cout<<"\nEnter the object's Kilograms: ";
        cin>>mass;
        while(mass < 0)
        {
            cout<<"Invalid Number! Enter a positive number! ";
            cout<<"\nEnter the object's Kilograms: ";
            cin>>mass;
        }

        cout<<"Enter the object's meters per second: ";
        cin>>velocity;
        while(velocity < 0)
        {
            cout<<"Invalid Number! Enter a positive number! ";
            cout<<"\nEnter the object's meters per second: ";
            cin>>velocity;
        }

        kE = get_kinetic_energy(mass, velocity);
        cout<<"Kinetic Energy: "<<kE;
        
        cout<<"\n\nDo you want to continue? Enter Y or N: ";
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