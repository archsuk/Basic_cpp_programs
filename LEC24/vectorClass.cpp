#include <bits/stdc++.h>
using namespace std;
class myVector
{
    int *arr;
    int s, c;

public:
    myVector()
    {
        s = 0;
        c = 1;
        arr = new int[1];
    }
    void push_back(int x)
    {
        arr[s++] = x;
        if (s == c)
        {
            int *copyarr = new int[2 * c];
            c *= 2;
            for (int i = 0; i < s; i++)
            {
                copyarr[i] = arr[i];
            }
            arr = copyarr;
        }
    }
    void pop_back(int x)
    {
        arr[s--] = x;
        if (s == c)
        {
            int *copyarr = new int[2 * c];
            c *= 2;
            for (int i = 0; i < s; i++)
            {
                copyarr[i] = arr[i];
            }
            arr = copyarr;
        }
    }
}

int main()
{

    return 0;
}