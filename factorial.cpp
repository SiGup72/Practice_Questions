#include <iostream>
using namespace std;
int factorial(int n)
{
    int fact=1;
    do
{fact*=n;
n--;}while(n>0);
 return fact;
}
int main()
{int n,fact;
cout<<"Enter the number"<<endl;
cin>>n;
fact=factorial(n);
cout<<"The factorial is "<<fact;
return 0;}