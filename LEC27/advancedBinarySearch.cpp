#include <bits/stdc++.h>
using namespace std;
bool isPossible(int mid, int n, vector<int> &v)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] >= mid)
        {
            count++;
        }
        else count = 0;
        if (count >= mid) return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int s = 0, e = n, ans = 0;
    ;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (isPossible(mid, n, v))
        {
            ans = max(ans, mid);
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    cout<<ans;

    return 0;
}