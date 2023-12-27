#include<iostream>
using namespace std;

int main()
{
    int a = 2;
    int* ap = &a;
    int val = *ap;
    cout<<val<<" ";
    cout<<ap;
    return 0;
}