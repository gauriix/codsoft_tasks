#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
   float num1,num2;
   char op;
   cout<<"\n\tWELCOME TO THE SIMPLE CALCULATOR"<<endl;
   while(true)
   {
      int choice;
      cout<<"\nEnter"<<endl;
      cout<<" 1. to start the calculator";
      cout<<"\t\t 2. to exit the calculator"<< endl;
      cin>>choice;
      if(choice==1)
      {
         cout<<"Enter your first number: ";
         cin>>num1;
         cout<<endl;
         cout<<"now Enter the operator (+, -, *, /): ";
         cin>>op;
         cout<<endl;
         cout<<"Enter your second number: ";
         cin>>num2;
         cout<<endl;
         switch(op)
         {
         case '+':
            cout<<"ADDITION:"<<endl;
            cout<<num1<<"+"<<num2<<" = "<<num1+num2<<endl;
            break;
         case '-':
            cout<<"SUBTRACTION:"<<endl;
            cout<<num1<<"-"<<num2<<" = "<<num1-num2<<endl;
            break;
         case '*':
            cout<<"MULTIPLICATION:"<<endl;
            cout<<num1<<"*"<<num2<<" = "<<num1*num2<<endl;
            break;
         case '/':
            if(num2==0)
            {
               cout<<"Error: Division by zero is not allowed.";
            }
            else
            {
               cout<<"DIVISION: "<<endl;
               cout<<num1<<"/"<<num2<<" = "<<num1/(float)num2<<endl;
            }
            break;
         default:
            cout <<"\t\tError: Invalid operator !!"<<endl;
         }
      }
      else if(choice==2)
      {
         cout<<"Exited the calculator";
         exit(0);
      }
      else
      {
         cout<<"Invalid choice !! enter correct choice to continue"<<endl;
      }
   }
   return 0;
} 