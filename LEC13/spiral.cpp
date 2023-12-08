#include<iostream>
using namespace std;

int main()
{
     int n, m;
    cin >> n >> m;

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Enter element(" << (i, j) << "): " ;
            cin >> arr[i][j];
        }
    }

    int upBound = 0 , lowBound = n  , lBound = 0 , rBound = m ;

    while (upBound<lowBound && rBound>lBound)
    {
       for (int i = lBound ; i < rBound ; i++)
    {
        cout<<arr[upBound][i]<<" ";
    }
    upBound++;
    for (int i = upBound; i < lowBound; i++)
    {
        cout<<arr[i][rBound]<<" ";
    }
    rBound--;
    for (int i = rBound; i > lBound; i--)
    {
        cout<<arr[lowBound][i]<<" ";
    }
    lowBound--;
    for (int i = lowBound; i > upBound ; i--)
    {
        cout<<arr[i][lBound]<<" ";
    }
    lBound++;
    }
    
    


    return 0;
}