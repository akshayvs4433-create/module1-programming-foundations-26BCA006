#include<iostream>
using namespace std;
int main()
{
double a,b;
char op;
cout<<"1.addition,2.sub,3.multiplication,4.division";

cout<<"Enter two numbers: ";
cin>> a >> b;

cout<<"Enter operator: ";
cin>> op;

switch(op)
{
    case '1':
        cout<<"Addition: "<<a+b;
        break;
    case '2':
        cout<<"Subtraction: "<<a-b;
        break;
    case '3':
        cout<<"Multiplication: "<<a*b;
        break;
    
    case '4':
        if(b==0)
            cout<<"Division by zero is not allowed.";
        
        else
            cout<<"Division: "<<a/b;
        break;
    default:
        cout<<"Invalid operator.";
    }
}