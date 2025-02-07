#include <iostream>
using namespace std;
int maxNumber(int l, int b)
{
    return l>b;

}

int reverseNumber(int n)
{
    int rem,rev=0;
    while(n>0)
    {rem=n%10;
    rev=rev*10+rem;
    n=n/10;}
    return rev;
}


int sumOfDigits(int n)
{ 
    int rem,sum=0;
    while(n>0)
    {rem=n%10;
    sum=sum+rem;
    n=n/10;}
    return sum;
}


int main()
{
    int l,b,a;
    cout<<"Enter two numbers"<<endl;
    cin>>l>>b;
    a=maxNumber(l,b);
    if(a==1)
    {cout<<"The larger one is "<<l;}
    else
    {cout<<"The larger one is "<<b;}

int n,reverse;
cout<<"Enter the number"<<endl;
cin>>n;
reverse=reverseNumber(n);
cout<<"The reverse of the number is "<<reverse;
int digitsum;
digitsum=sumOfDigits(n);
    cout<<"The sum of digits of the number is "<<digitsum;
    if(digitsum==n)
    {cout<<"The number is palindrome";}
    else
    {cout<<"The number is not palindrome";}
    return 0;
}