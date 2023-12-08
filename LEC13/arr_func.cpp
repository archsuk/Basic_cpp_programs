#include<iostream>
using namespace std;

int* reverse(int a[] , int x , int s , int e){
    for (int i = s; i < e; i++)
    {
        swap( a[s] , a[e]);
        s++;
        e--;
    }
    for (int i = 0; i < x; i++)
    {
       cout<<a[i]<<" ";
    }
    
}

int main()
{
    int arr[10] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10};

    reverse(arr,10,2,7);
    
    return 0;
}