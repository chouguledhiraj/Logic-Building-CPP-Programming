//find the number of digit
#include<iostream>
using namespace std;


void DisplayFactor(int iNo)
{
    int i=1;

    while( i<=(iNo/2))
    {
        if((iNo%i)==0)
        {
            cout<<i<<endl;
            
        }
      i++;      
    }
    
}


int main()
{
    int iValue=0, iRet=0;

    cout<<"Enter number :"<<endl;
    cin>>iValue;

    DisplayFactor(iValue);
  
    return 0;
}