#include<iostream>
using namespace std;
void toh(int n ,char s , char h , char d)
{
    if(n==0) return;
    toh(n-1,s,d,h);
    cout<<"move ring"<<n<<"from"<<s<<"to"<<d<<endl;
    toh(n-1,h,s,d);

    
}

int main()
{
   toh(5,'A','B','C');
    
    return 0;
}