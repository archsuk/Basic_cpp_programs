// #include<iostream>
// using namespace std;
// void merge(int a[], int s,int e,int mid)
// {
//     int n1=mid-s+1;
//     int n2=(e-s)+1-n1;
//     int b[n1],c[n2];
//     int i=0 , j=0 , k;
//     for (int t = 0; t <= mid; t++)
//     {
//         b[i++]=a[t];
//     }
//     for (int t = 0; i <=e; i++)
//     {
//         c[j++] = a[t];
//     }
//     int i = n1;
//     int j = n2;
//     int k = n1+n2+1;

//     while (i >= 0 && j >= 0)
//     {
//         if (a[i] > b[j])
//         {
//             a[k] = a[i];
//             k--;
//             i--;
//         }
//         else
//         {
//             a[k] = b[j];
//             k--;
//             j--;
//         }
//     }
//     while (j >= 0)
//     {
//         a[k] = b[j];
//         k--;
//         j--;
//     }

// }
// void ms(int a[],int s,int e)
// {
//     if(s>e) return;
//     int mid = s+((e-s)/2);
//     ms(a,s,mid);
//     ms(a,mid+1,e);
//     merge(a,s,e,mid);
// }

// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//       for (int i = 0; i < n; i++)
//     {
//         cout<<"Enter element("<<i<<"): ";
//         cin>>arr[i];
//     }
//     int s=0 , e=n-1;
//     cout<<ms(arr,s,e);

//     return 0;
// }
#include <iostream>
using namespace std;

void merge(int *a, int s, int e, int mid)
{
    int n1 = mid - s + 1;
    int n2 = e - mid;
    int b[n1];
    int c[n2];
    int i = 0, j = 0;
    for (int m = s; m <= mid; m++)
        b[i++] = a[m];
    for (int n = mid + 1; n <= e; n++)
        c[j++] = a[n];
    int k = s;
    i = 0;
    j = 0;
    while (i < n1 && j < n2)
    {
        if (b[i] < c[j])
            a[k++] = b[i++];
        else
            a[k++] = c[j++];
    }
    while (i < n1)
        a[k++] = b[i++];
    while (j < n2)
        a[k++] = c[j++];
}

void mergesort(int *a, int s, int e)
{   if (s >= e)
    return;
    int mid = s + (e - s) / 2;
    mergesort(a, s, mid);
    mergesort(a, mid + 1, e);
    merge(a, s, e, mid);
}

int main()
{
    int a[] = {2, 4, 3, 7, 5, 8};
    mergesort(a, 0, 5);
    for (int i = 0; i < 6; i++)
    {
        cout << a[i];
    }
}