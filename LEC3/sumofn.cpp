#include<iostream>
using namespace std;

int main()
{
    int i , n;
    cin>>n;
    int sum=0;

    for ( i = 1; i <=n; i++)
    {
        sum+=i;
    }
    cout<<sum;
    
    return 0;
}