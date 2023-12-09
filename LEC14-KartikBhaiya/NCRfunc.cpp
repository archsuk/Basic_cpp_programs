#include<iostream>
using namespace std;
int factorial(int x){
    int ans =1;
    for (int i = 1; i <= x; i++)
    {
       ans = ans *i;
    }
    return ans;
    
}
int ncr(int n , int r ){
    int nfact = factorial(n);
    int rfact = factorial(r);
    int nrfact= factorial(n-r);

    int sol = nfact / ((rfact)*(nrfact));
    return sol;
}

int main()
{
    int n , c , r;
    cin>>n>>r;

    cout<<"c = "<<ncr(n , r);
    
    return 0;
}