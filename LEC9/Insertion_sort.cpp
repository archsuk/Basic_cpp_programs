#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];

   for (int i = 0; i < n; i++)
    {
        cout<<"Enter element("<<i<<"): ";
        cin>>arr[i];
    }


    for (int i = 0; i < n-1 ; i++)
    {
        int copy = arr[i+1] ;
        int  j = i;
        // for ( j = i; j >= 0; j--)
        // {
        //     if (arr[j]> copy)
        //     {
        //         arr[j+1] = arr[j];
        //     }
        //     else
        //     {
        //         break;
        //     }
            
        // }
        // arr[j+1] = copy;
        while (j>=0 && arr[j] > copy)
        {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = copy;
           

        
        
    }
    cout<<"sorted array :"<<endl;

     for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<endl;
        }
    

    return 0;
}