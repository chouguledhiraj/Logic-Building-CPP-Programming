#include<iostream>
using namespace std;

//Approach 3: using recursion
void Display()
{
    auto  i=1;

    if(i<=4)
    {
    cout<<"*"<<endl;
    i++;
    Display();
    }
}

int main()
{
    Display();

    return 0;
}