#include <iostream>
using namespace std;
bool bsearch(int a[], int n, int x, int s, int e)
{
    if (s > e)
        return false;
    int mid = (s + e) / 2;
    if (a[mid] == x)
        return true;
    else if (a[mid] > x)
        return bsearch(a, n, x, s, mid - 1);
    else
        return bsearch(a, n, x, mid + 1, e);
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        // cout << "Enter element(" << i << "): ";
        cin >> arr[i];
    }
    int x;
    cin >> x;

    cout << bsearch(arr, n, x, 0, n - 1);

    return 0;
}