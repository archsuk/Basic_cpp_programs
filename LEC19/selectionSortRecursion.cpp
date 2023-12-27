// #include <iostream>
// using namespace std;
// int ssort(int a[], int n, int b, int e)
// {
//     if (n == 0)return 0;
//     int min_index = b; 
//     for (b = 0; b < e; b++)
//     {
//         if (a[b] < a[min_index])
//         {
//             min_index = b;
//         }
//     }
//     ssort(a,n-1,b+1,e);
// }

// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter element(" << i << "): ";
//         cin >> arr[i];
//     }
//     int min_index;

//     for (int i = 0; i < n - 1; i++)
//     {

//         min_index = i;
//         ssort(arr , n , i , n);
        
//         swap(arr[i], arr[min_index]);
//     }

//     cout << "sorted array :" << endl;

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << endl;
//     }

//     return 0;
// }