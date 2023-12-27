#include<bits/stdc++.h>
using namespace std;
int gpsum(int a , int n , int r)
{
    if(n==0) return 0;
    int subsum = gpsum(a , n-1 , r);
    return subsum + a*pow(r,n-1);


}

int main()
{
    cout<<gpsum(1,4,2);
    
    return 0;
}