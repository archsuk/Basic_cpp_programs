#include<iostream>
using namespace std;

int main()
{
    int n ;
    cin>>n;
    
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter element("<<i<<"): ";
        cin>>arr[i];
    }

    for (int i = 0; i < n-1 ; i++)
    {
        for (int j = 0; j < n-i ; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j] , arr[j+1]);
            }
            

                      
        }
        
    }
    cout<<"sorted array :"<<endl;

     for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<endl;
        }

    

    return 0;
}