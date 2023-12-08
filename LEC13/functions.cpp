#include<iostream>
using namespace std;
int factorial(int x){
    int ans = 1;
    for (int i = 1; i <= x; i++)
    {
        ans *= i;
    }
    return ans;
    
}

int main()
{
    int n = factorial(4);
    cout<<n;
    
    
    return 0;
}