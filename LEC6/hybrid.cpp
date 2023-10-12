#include<iostream>
using namespace std;

int main()
{
    int n ;
    cin>>n;

    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i+j==n-1)
            {
               cout<<'*'<<" ";
            }
            else if (i+j<n-1)
            {
               cout<<j+1<<" ";
            }
            else if (i+j>n-1)
            {
                char c=j+'A';
                cout<<c<<" ";
            }
            
            
        }
        cout<<endl;
        
    }
    
    return 0;
}