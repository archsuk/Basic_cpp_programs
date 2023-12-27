#include<iostream>
using namespace std;
int factorial(int n){
    if(n==1) return 1;

    int subans;
    subans=factorial(n-1);

    return n*subans;
}

int main()
{
    cout<<factorial(10);
        return 0;
}