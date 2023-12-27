#include<iostream>
using namespace std;

int sumarr(int a[] , int n)
{
    if(n==0) return 0;
     else return sumarr(a,n-1)+a[n-1];

}

int main()
{
    int n;
    int a[5]={10,20,30,40,50};
    cout<<sumarr(a, 5);
    
    return 0;
}