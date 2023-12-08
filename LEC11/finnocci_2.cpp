#include<iostream>
using namespace std;

int main()
{
    int a = 0 , b = 1 , c ;
    int n;
    cin>>n; 

    int counter = 3 ;
    cout<<a<<" "<<b<<" ";

    while (counter<=n)
    {
        c = a + b;
        cout<<c<<" ";
        counter++;
        a = b;
        b = c;
    }
    
    return 0;
}