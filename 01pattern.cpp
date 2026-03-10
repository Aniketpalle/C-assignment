#include <iostream>
using namespace std;

int main()
{
    int i, j;
    for(int i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            if((i+j) % 2 == 0)
            cout<<"1";
            else
            cout<<"0";
        }
        cout<<endl;

    }
}    