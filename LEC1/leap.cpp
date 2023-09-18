//To check leap year 
#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter year: ";
    cin>>x;

    if(x%4==0){
        if (x%100==0)
        {
            if (x%400==0)
            {
                cout<<"It is leap year";
            }
            else{cout<<"Not a leap year";}
        
        }
        else{
            cout<<"leap year";
        }
        
        
    }
    else{cout<<"Not a leap year";}
    
}