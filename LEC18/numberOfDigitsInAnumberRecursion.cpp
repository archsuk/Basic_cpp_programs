#include<iostream>
using namespace std;
int count(int i)
{
    if(i<10&&i>0) return 1;
    int subans = count(i/10);
    return subans+1;
}

int main()
{
    int x = 1000;
    cout<<count(x);
    
    return 0;
}