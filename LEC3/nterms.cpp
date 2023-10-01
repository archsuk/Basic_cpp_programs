#include<iostream>
#include<math.h>
using namespace std;


int main()
{
    int n ;
    int i;
    cin>>n;

    // for ( i = 0; i <n; i++)
    // {
    
    //     cout<<" "<< pow(2,i)<<" ";

    // }

    int x=1;
    for ( i = 0; i < n; i++)
    {
        cout<<x<<" ";
        x*=2;
    }
    
    

    return 0;
}