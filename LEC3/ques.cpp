#include<iostream>
using namespace std;

int main()
{
    int n , m ,i , x,sum;
    cout<<"no of students";
    cin>>n;

    cout<<"no of subjects";
    cin>>m;

    for ( i = 0; i < n; i++)
    {
        for ( x = 0; x < m; x++)
        {
            cout<<"marks in subject "<<" "<<x<<" ";
            int f;
            cin>>f;
            sum+=f;
            

        }
    
        int avg = sum/m;
        cout<<avg;
        sum=0;
        
    }
    

    return 0;
}