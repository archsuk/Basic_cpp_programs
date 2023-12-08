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
            cout << "Enter element(" << (i, j) << "): " << endl;
            cin >> arr[i][j];
        }
    }
    
    return 0;
}