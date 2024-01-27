#include<iostream>
using namespace std;
int power(int a , int n)
{
    if(n==0) return 1;
    if(n==1) return a;
    if (n%2==1)
    {
        return a * power(a,n/2) * power(a,n/2);
    }
    else return power(a,n/2) * power(a,n/2);
    
}

int main()
{
    cout<<power(2 , 11);
    
    return 0;
}