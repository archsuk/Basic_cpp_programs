#include<iostream>
using namespace std;
void printTable(int init , int fval , int step)
{
    int far = init , cel;

    while (far<=fval){
        cel = (5/9.0) * (far - 32);
        cout<<far<<" "<<cel<<endl;
        far = far + step;

    }
}

int main()
{
    int init , fval , step ,cel;
    cin>>init>>fval>>step;
    printTable(init ,fval , step ); 
    
    return 0;
}