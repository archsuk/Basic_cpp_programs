#include <iostream>
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
    int sum = 0;
    cout << "row_sum" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << "sum of " << i << "row = " << sum << endl;
        sum = 0;
    }
    cout << "col_sum" << endl;
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            sum = sum + arr[i][j];
        }
        cout << "sum of " << j << "col = " << sum << endl;
        sum = 0;
    }

    // for (int i = 0; i < n; i++)
    // {
    //    for (int j = 0; j < m; j++)
    //    {
    //      cout<<arr[i][j]<<" ";
    //    }

    // }

    return 0;
}