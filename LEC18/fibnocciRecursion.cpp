#include<iostream>
using namespace std;
int fibnacci(int n){
    // if(n==0) return 0;
    // if(n==1) return 1;
    if(n<2) return n;`

    int subans = fibnacci(n-1)+fibnacci(n-2);
    return subans;


}

int main()
{
    cout<<fibnacci(11);

    
    return 0;
}