#include <iostream>
using namespace std;
int knap(int n, int *wt, int *val, int cap)
{
    if (n == 0 || cap == 0)
    {
        return 0;
    }
    int opt2 = 0;
    int opt1 = knap(n - 1, wt, val, cap);
    if (cap >= wt[n - 1])
    {
        opt2 = knap(n - 1, wt, val, cap - wt[n - 1]) + val[n - 1];
    }
    return max(opt1, opt2);
}

int main()
{
    int val[6] = {2, 3, 4, 5, 8, 2};
    int wt[6] = {5, 1, 2, 1, 7, 4};
    cout << knap(6, wt, val, 10);

    return 0;
}