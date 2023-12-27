#include<iostream>
using namespace std;
int power(int a , int b)
{
    if(b==0) return 1;
    if(b==1) return a;

    return a*power(a,b-1);
}

int main()
{
    cout<<power(-2,1);
    
    return 0;
}