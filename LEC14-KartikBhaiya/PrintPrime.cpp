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

void PrintPrime(int n) 
{ 
    for (int i = 2; i <= n ; i++)
    {
       if (primeOrNot(i) == true)
       {
        cout<<i<<" ";
       }
       
    }
    cout<<endl;
    
}

int main()
{
    int x; 
    cin>>x;

    PrintPrime(x);
    
    return 0;
}