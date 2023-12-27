#include <iostream>
using namespace std;
bool ls(int a[], int n, int x)
{
    if (n == 0)
        return false;
    if (a[n - 1] == x)
        return true;
    else if (n > 0)
    {
        ls(a, n - 1, x);
    }
    else
        return false;
    /* optimized
    bool ls(int*a , int n , int x){
    if(n==0) return false;
    bool subans=ls(a,n-1,x);
    return subans || (a[n-1]==x);
}*/
}

int main()
{
    int n, x;
    int a[5] = {10, 20, 30, 40, 50};

    cout << ls(a, 5, 20);

    return 0;
}
