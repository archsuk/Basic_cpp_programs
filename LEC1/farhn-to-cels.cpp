//converting temprature fahreneit to celsuis
#include<iostream>
using namespace std;

int main()
{
    float temp;
    cout<<"Enter temprature:";
    cin>>temp;

    cout<<"temp in celsius: "<<(5.0/9.0)*(temp-32);
    return 0;

}