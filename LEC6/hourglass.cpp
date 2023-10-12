#include<iostream>
using namespace std;

int main()
{
    int n ;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n ; j++)
        {
            if (i>=j)
            {
                cout<<'*'<<" ";
            }
            else cout<<j+1<<" ";}

            for (int j = 0; j < n; j++)
            {
                if (i+j>=n-1)
                {
                    cout<<'*'<<" ";
                }
                else cout<<n-j<<" ";
                
            }
            cout<<endl;
                  
    }
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n ; j++)
        {
            if (i+j<=n-1)
            {
                cout<<'*'<<" ";
            }
            else cout<<j+1<<" ";}

            for (int j = 0; j < n; j++)
            {
                if (i<=j)
                {
                    cout<<'*'<<" ";
                }
                else cout<<n-j<<" ";
                
            }
            cout<<endl;
                  
    }
    
    return 0;
}