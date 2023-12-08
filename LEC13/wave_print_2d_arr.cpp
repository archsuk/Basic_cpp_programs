#include<iostream>
using namespace std;

int main()
{
     int n, m;
    cin >> n >> m;

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Enter element(" << (i, j) << "): " ;
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        if (i%2==0)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<arr[j][i]<<" ";
            }
            cout<<endl;
            
        }
        else {
            for (int j = n-1; j > -1 ; j--)
            {
                cout<<arr[j][i]<<" ";
            }
            cout<<endl;
            
        }
        
    }
    
    
    return 0;
}