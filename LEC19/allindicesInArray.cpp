#include<iostream>
using namespace std;
void index(int a[] , int n, int x)
{
    if(n==0) return ;
    index(a,n-1,x);
    if(a[n-1]==x) cout<<n-1<<" ";
}

int main()
{
    int n, x;
    int a[5] = {10, 20, 20, 40, 20};
    index(a, 5, 20);

    
    return 0;
}