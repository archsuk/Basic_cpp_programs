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
    int z=0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i]==0)
        {
            z++;
        }
                
    }
    for (int i = 0; i < n; i++)
    {
        if (i<z) arr[i]=0;
        else arr[i]=1;
        }
        
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i];
        }
        

    return 0;
}