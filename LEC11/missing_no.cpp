#include<iostream>
using namespace std;

int main()
{
    int n ;
    int a_sum = 0;
    cin>>n;
    
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter element("<<i<<"): ";
        cin>>arr[i];
        }

    for (int i = 0; i < n; i++){
            a_sum = a_sum + arr[i];
        }
        
    cout<<a_sum<<endl;

    int nat_sum =0 ;

    nat_sum = ((n+1)*(n+2))/2;
    int diff;
    diff = nat_sum - a_sum;

    cout<<diff;

    
   
    
    return 0;
}