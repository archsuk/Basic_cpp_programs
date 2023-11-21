#include<iostream>
using namespace std;

int main()
{
    int n , k;
    cin>>n;
    
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter element("<<i<<"): ";
        cin>>arr[i];
    }
    for (int i = 0; i <k ; i++)
    {
        for (int j = 0; j < n-i ; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j] , arr[j+1]);
            }
            

                      
        }
        
    }
    cin>>k;

    cout<<arr[k-1];

    return 0;
}