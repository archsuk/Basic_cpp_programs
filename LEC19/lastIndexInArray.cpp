#include<iostream>
using namespace std;
int index(int a[] , int n, int x)
{
    if(n==0) return -1;
    int subans=index(a,n-1,x);
    if(a[n-1]==x) return n-1;
    if(subans!=-1) return subans;
    
    return -1;
    
    

}

int main()
{
    int n, x;
    int a[6] = {10, 20, 30, 40, 50,20};

    cout << index(a, 6, 20);

    
    return 0;
}