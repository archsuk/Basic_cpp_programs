#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int x;
    cin>>x;
    bool flag=false;
    int ans;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==x)
        {
            flag=true;
            ans=i;

        }
        
    }
    if (flag==true)
    {
        cout<<"yes"<<" "<<ans;
    }
    else cout<<"False";
    
    return 0;
}