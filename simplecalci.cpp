#include<iostream>
using namespace std;


class Calculator
{
    int num1,num2;
    public:
    Calculator()
    {
   
    }

void accept()
{
    cout<<"Enter the first number:";
    cin>>num1;
    cout<<"Enter the second number:";
    cin>>num2;
}

void add()
{
    cout<<"Addition of number is:"<<num1+num2<<endl;
}

void subtract()
{
    cout<<"Subtraction of number is:"<<num1-num2<<endl;
}

void Multiplication()
{
     cout<<"Multiplication of number is:"<<num1*num2<<endl;
}

void Division()
{
    cout<<"division of number is:"<<num1/num2<<endl;
}
};
int main()
{

    Calculator c1;
    c1.accept();
    c1.add();
    c1.Multiplication();
    c1.subtract();
    c1.Division();

    return 0;
}