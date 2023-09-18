#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a , b , c  ;
    cout<<"Enter a,b,c for a*x^2+b*x+c";
    cin>>a>>b>>c;

    float d= b*b-4*a*c*1.0;
    cout<<d<<endl;

    if (d==0)
    {
        cout<<-b/(2.0*a);
    }
    else if(d>0)
    {
        cout<<(-b+pow(d,0.5))/(a*2.0);
        cout<<(-b-pow(d,0.5))/(a*2.0);
    }
    else{
        float r,im;
        r=-b/(2.0*a);
        im=pow(-d,0.5)/(2.0*a);
        cout<<r<<"+i"<<im<<endl;
        cout<<r<<"-i"<<im<<endl;


    }
    



    
    return 0;
}