#include<iostream>
using namespace std;

int main(){
    int n1 , n2;
    char op;
    cin>>n1>>n2>>op;

    if(op=='+')
    {
        cout<<"result is "<<n1+n2;
        
    }
    else if (op=='-')
    {
        cout<<"result is "<<n1-n2;
    }
    else if (op=='*')
    {
        cout<<"result is "<<n1*n2;
    }
    else if (op=='/')
    {
         if (n2==0)
         {
             cout<<"not defined";
         }
         else
        cout<<"result is "<<n1/float(n2);
        //cout<<"result is "<<n1/n2*1.0;
        
    }
    else if (op=='%')
    {
        cout<<"result is "<<n1%n2;
    }
    else{
        cout<<"invalid input";
    }
    
    
    
}