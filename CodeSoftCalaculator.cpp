#include<iostream>
using namespace std;
int main()
{
    int a; //variable declaration for choie
    cout<<"Welcome to Calculator :"<<endl;
    int b , c;
    cout<<"Enter two numbers :"<<endl;
    cin>>b >>c ;//taking input
    cout<<"For  Addition press 1 \n "<<endl;
    cout<<"For Subtraction Press 2\n"<<endl;
    cout<<"For Multiplication Press 3\n"<<endl;
    cout<<"For Divison Press 4\n"<<endl;
    cin>>a;//taking input from user
    switch (a)
    {
    case 1/* constant-expression */:
        cout<<"Result of the  addition is ="<< b + c<<endl;
        break;
    case 2:
        cout<<"Result of the  Subtraction is ="<< b - c<<endl; 
        break;
    case 3:
         cout<<"Result of the  Multiplication is ="<< b * c<<endl;
        break;
    case 4:
         cout<<"Result of the  addition is ="<< b + c<<endl;
        break;
    
    default:
        break;
    }

}
