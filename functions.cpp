#include <iostream>
using namespace std;
//function to find greates number 
int maxNumber(int l, int b)
{
    return l>b;

}

// function to find factorial
int factorial(int n)
{
    int fact=1;
    do
{fact*=n;
n--;}while(n>0);
 return fact;
}

//function to reverse a number
int reverseNumber(int n)
{
    int rem,rev=0;
    while(n>0)
    {rem=n%10;
    rev=rev*10+rem;
    n=n/10;}
    return rev;
}

//function to calculate the sum of the digits of a number
int sumOfDigits(int n)
{ 
    int rem,sum=0;
    while(n>0)
    {rem=n%10;
    sum=sum+rem;
    n=n/10;}
    return sum;
}

//function to check if a number is palindrome or not
int isPalindrome(int n)
{
    int r;
    r=reverseNumber(n);
    if(n==r)
    return 1;
    else
    return 0;
}

//function to give fibonacci series for given no. of terms
void Fibonacci(int n)
{
    int i,t1=0,t2=1,sum;
    if(n==1)
    {
        cout << "The Fibonacci series is: " << t1 << endl;
        cout << "The nth Fibonacci number is " << t1 << endl;
    }
    
    cout<<"The fibonacci series is "<<t1<<", "<<t2;
     for(i=3;i<=n;i++)
     { sum=t1+t2;
        cout<<", "<<sum;
        t1=t2;
        t2=sum;}
    cout<<"The nth fibonacci number is "<<t2<<endl;
}

//function to print hcf or gcd
int gcd(int a,int b)
{
    int i,max=1;
    if(a<b){
    for(i=2;i<=(a/2);i++)
    {if(a%i==0 && b%i==0)
    {if(i>max)max=i;}}}
    else
    {for(i=2;i<=(b/2);i++)
    {if(a%i==0 && b%i==0)
    {if(i>max)max=i;}}}
    return max;
}

int main()
{   cout<<"MENU"<<endl;
    cout<<"1. Max Number"<<endl<<"2. Factorial"<<endl<<"3. Reverse Number"<<endl<<"4. Sum of digits"<<endl<<"5. Palindrome"<<endl<<"6. Fibonacci"<<endl<<"7. Greatest common divisor"<<endl;
    char ans='y';
    while(ans=='y' || ans=='Y')
    { cout<<"Enter your choice"<<endl;
        int n;
        cin>>n;
    switch(n)
    {
        case 1: {int l,b,a;
            cout<<"Enter two numbers"<<endl;
            cin>>l>>b;
            a=maxNumber(l,b);
            if(a==1)
            {cout<<"The larger one is "<<l<<endl;}
            else
            {cout<<"The larger one is "<<b<<endl;}
            break;}
        case 2: {int x,r;
            cout<<"Enter a number"<<endl;
            cin>>x;
            r=factorial(x);
            cout<<"The factorial is "<<r<<endl;
            break;}
        case 3:{int x,reverse;
            cout<<"Enter the number"<<endl;
            cin>>x;
            reverse=reverseNumber(x);
            cout<<"The reverse of the number is "<<reverse<<endl;
            break;}
        case 4:{int x,digitsum;
            cout<<"Enter the number"<<endl;
            cin>>x;
            digitsum=sumOfDigits(x);
            cout<<"The sum of digits of the number is "<<digitsum<<endl;
            break;}
        case 5:{int x,p;
            cout<<"Enter the number"<<endl;
            cin>>x;
            p=isPalindrome(x);
            if(p==1)
            {cout<<"Yes the number is palindrome"<<endl;}
            else
            {cout<<"No the number is not palindrome"<<endl;}
            break;}
        case 6:{int x;
            cout<<"Enter the number of terms you want"<<endl;
            cin>>x;
            Fibonacci(x);
            break;
        }
        case 7: {int l,b,r;
            cout<<"Enter two numbers"<<endl;
            cin>>l>>b;
            r=gcd(l,b);
            cout<<"The greatest common divisor is "<<r<<endl;
            break;
        }
        default: {cout<<"Invalid choice";}
} 
    cout<<"Do you wish to continue y/n"<<endl;
        cin>>ans; }
    return 0;
}