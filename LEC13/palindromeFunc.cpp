#include <iostream>
#include<string.h>
using namespace std;
bool ispal(char ch[], int n)
{
    int s = 0, e = n - 1;
    while (s <= e)
    {
        if (ch[s] != ch[e])
        {
            return false;
        }
        s++;
        e--;
    }
    return true;
}

int main()
{
    char a[50] ;
    gets(a);
    
    int y = strlen(a);
    cout<<ispal(a , y);
    

    return 0;
}