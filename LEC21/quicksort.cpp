#include <iostream>
using namespace std;
int qs(int a[], int s, int e)
{
    int n = (e - s) + 1;
    int pvt = s;
    int count = s;
    for (int i = s+1; i <n; i++)
    {
        if (a[pvt] > a[i])
        {
            count++;
        }
    }
    swap(a[pvt], a[count]);
    pvt=count;
    int i, j=pvt+1;
    while (i < pvt && j <= e)
    {
        while (a[i] < a[pvt] && i < pvt)
            i++;
        while (a[j] >= a[pvt] && j <= e)
            j++;

        if (i < pvt && j <= e)
            swap(a[i], a[j]);
    }
    return pvt;
    // qs(a, s, pvt - 1);
    // qs(a, pvt + 1, e);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i];
    // }
}
void quick(int a[] , int s, int e)
{
    if(s>=e) return;
    int pvt = qs(a,s,e);
    quick(a,s,pvt-1);
    quick(a,pvt+1,e);
}

int main()
{

    int a[] = {4, 3, 0, 2, 5, 7, 1, 3};
    quick(a, 0, 7);
    for (int i = 0; i < 7; i++)
    {
        cout<<a[i];
    }
    

    return 0;
}