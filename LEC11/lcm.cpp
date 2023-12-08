#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a , b;
    cin>>a>>b;

    int x = min(a,b);
   
    int hcf;
     for (int i = x; i > 1 ; i--)
    {
        if (a%i==0 && b%i==0)
        {
           hcf = i;
           break;
        }
        
    }

    int lcm = (a*b)/hcf;
    cout<<lcm;
    


    return 0;
}