#include<iostream>
using namespace std;
void printn(int n ){
    // cout<<n<<" ";
    // if(n>1)printn(n-1);
        if (n<=0) return;
        else {
            printn(n-1);
            cout<<n<<" ";
        }
    
}

int main()
{
    printn(10);
    
    return 0;
}