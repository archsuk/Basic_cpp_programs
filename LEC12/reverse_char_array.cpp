#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char arr1[7];
    gets(arr1);
    int c = strlen(arr1);
    int s = 0, e = c - 1;
    while (s<=e){
        swap(arr1[s] , arr1[e]);
        s++;
        e--;
    }
    cout<<arr1;
    return 0;
}