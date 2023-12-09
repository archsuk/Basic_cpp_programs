#include<iostream>
using namespace std;
int factorial(int x){
    int ans =1;
    for (int i = 1; i <= x; i++)
    {
       ans = ans *i;
    }
    return ans;
    
}

int main()
{
    int a; 
    cin>>a;
    cout<<factorial(a);
    
    return 0;
}