#include <iostream>
using namespace std;
int main()
{ int a,b,c;
cout<<"Enter two numbers you want to swap"<<endl;
cin>>a>>b;
cout<<"A is "<<a<<" and B is "<<b;
c=a;
b=a;
b=c;
cout<<"After swapping,A is "<<a<<" and B is "<<b;
return 0; }