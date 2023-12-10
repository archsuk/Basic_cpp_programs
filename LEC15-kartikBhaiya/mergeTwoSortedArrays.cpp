#include <iostream>
using namespace std;
void inputArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element(" << i << "): ";
        cin >> arr[i];
    }
}
void MergeSortedArr(int a[], int b[], int n, int m)
{
    int i = n - 1;
    int j = m - 1;
    int k = n + m - 1;

    while (i >= 0 && j >= 0)
    {
        if (a[i] > b[j])
        {
            a[k] = a[i];
            k--;
            i--;
        }
        else
        {
            a[k] = b[j];
            k--;
            j--;
        }
    }
    while (j >= 0)
    {
        a[k] = b[j];
        k--;
        j--;
    }
}
void printArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int n, m;
    cout << "enter n & m :";
    cin >> n >> m;
    int a[100], b[100];
    inputArr(a, n);
    inputArr(b, m);
    MergeSortedArr(a, b, n, m);
    printArr(a, n + m);
    return 0;
}