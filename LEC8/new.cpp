#include<iostream>
using namespace std;

int main()
{
    int n , m;
    cin>>n>>m;
    int arr[n],arr2[m];

    for (int i = 0; i < n ; i++)
    {
       cout<<"Enter element("<<i<<"): ";
        cin>>arr[i];
    }

    for (int j = 0; j < m ; j++)
    {
       cout<<"Enter element("<<j<<"): ";
        cin>>arr2[j];
    }

    int ans;

    for (int i = 0; i < n; i++)
    {
        int temp;
        temp=arr[i];
        for (int j = 0; j < m; j++)
        {
            if (arr2[j]==temp)
            {
                cout<<arr2[j]<<endl;
            }
            
        }
        

    }
    
    return 0;
}