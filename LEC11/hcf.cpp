#include<iostream>
using namespace std;

int main()
{
    int a , b , smol;
    cin>>a>>b;

    if (a>b) smol= b;
    else smol=a;
    

    for (int i = smol; i > 1 ; i--)
    {
        if (a%i==0 && b%i==0)
        {
           cout<<i;
           break;
        }
        
    }
    
    return 0;
}