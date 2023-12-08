#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char arr1[1] , arr2[20];
    gets(arr1);
    // gets(arr2);

    // cout<< strlen(arr1)<<endl;
    // cout<< strcat(arr1 , arr2)<<endl;

    // strcpy(arr2 , arr1);
    // cout<< strcmp(arr1 , arr2);
    // cout<<arr2<<endl;
    
    arr1[0]=tolower(arr1[0]);
    cout<<arr1;

    // cout<<arr1;
    // cout<<arr2;
    
    return 0;
}