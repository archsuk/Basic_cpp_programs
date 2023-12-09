#include<iostream>
using namespace std;
bool primeOrNot(int x ){
    bool flag = true ; 
    for (int i = 2; i < x/2 ; i++)
    {
        if (x%i==0)
        {
            flag = false;
            break;
        }
        else ;
        
    }
    
    return flag;
}

int main()
{
    int x; 
    cin>>x;

    cout<<primeOrNot(x);
    
    return 0;
}