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
    int min_index;

    for (int i = 0; i < n-1; i++)
    {
        
         min_index = i;
          for (int j = i+1; j < n; j++)
          {
            if (arr[j] < arr[min_index])
            {
               min_index = j;
            }
                       
          }
          swap(arr[i] , arr[min_index]);
          
        }

    cout<<"sorted array :"<<endl;

     for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<endl;
        }
    


    return 0;
}