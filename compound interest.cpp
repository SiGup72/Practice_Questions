#include <iostream>
#include <cmath>
using namespace std;
int main()
{ float p,r,n,t,ci;
cout<<"Provide the principal,interest,no. of times interest applied and time period"<<endl;
cin>>p>>r>>n>>t;
ci=pow(p*(1+(r/(100*r))),n*t);
cout<<"The compound interest is "<<ci;
return 0;
}