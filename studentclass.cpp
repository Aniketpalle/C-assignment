#include <iostream>
using namespace std;

class Student
{
    int bookid;
    string title;
    string author;
    int price;

    public:
    void accept()
    {
        cout<<"Enter the Book Id:";
        cin>>bookid;
        cout<<"\nEnter the Title of the Book:";
        cin>>title;
        cout<<"\nEnter name of the Author of the Book:";
        cin>>author;
        cout<<"\nEnter the Price of the Book:";
        cin>>price;
    }

    void display()
    {
        cout<<"Book Id:"<<bookid<<"\nTitle:"<<title<<"\nAuthor of the Book:"<<author<<"\nPrice of the Book:"<<price<<endl;
    }
};

int main()
{
    int i;
    Student t1;
    for(int i = 0; i <= 3; i++)
    {
        t1.accept();
    }
    for(int i = 0; i <= 3; i++)
    {
        t1.display();
    }
}