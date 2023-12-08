#include<iostream>
using namespace std;

int sum(int a , int b){
    int ans = a + b;
    return ans;
}


int main()
{
    int a , b;
    cin>>a>>b;
    int x = sum( a , b );
    cout<<x;
    
    return 0;
}