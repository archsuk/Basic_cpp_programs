#include<iostream>
using namespace std;
void encoding(int a[] , int n , char[] ,int s)
{
    if (n==s) return ;
        

}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    char temp[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        temp[i]='a'+arr[i]-1;

    }
    for (int i = 0; i < n; i++)
    {
        cout<<temp[i];
    }
    
    
    
    
    return 0;
}