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
    int s = 0 , e = n - 1;
    int x; 
    cin>>x;
    bool flag = false;

    while (s<=e)
    {
        int mid = (s + e) / 2;
        
        if (arr[mid] == x)
        {
            flag = true;
            break;
        }
        else if (arr[mid] > x)
        {
            e = mid -1;
        }
        else if (arr[mid] < x)
        {
            s = mid +1;
        }
        else;
        
        }
    
    if (flag == true)
    {
        cout<<"found";
    }
    else cout<<"not found";
    
    

    
    return 0;
}