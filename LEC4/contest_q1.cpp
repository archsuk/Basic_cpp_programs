#include<iostream>
using namespace std;

int main()
{
    int n;
    int x =0;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        char a,b,c;
        cin>>a>>b>>c;

        if (b=='+')
        {
            x++;
        }
        else{
            x--;
        }
        

            }
            cout<<x;
    
    return 0;
}