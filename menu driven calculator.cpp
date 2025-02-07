#include <iostream>
using namespace std;
int main()
{ int i=1;
float a,b;
char c;
while(1)
{cout<<"MENU"<<endl<<"1 Addition"<<endl<<"2 Subtraction"<<endl<<"3 Multiplication"<<endl<<"4 Division"<<endl<<"5 Exit";
cout<<"Enter your choice"<<endl;
cin>>i;
cout<<"Enter two numbers"<<endl;
cin>>a>>b;
switch(i){
case 1:
{cout<<"The sum is-"<<a+b;
break; }
case 2:
{cout<<"The difference is-"<<a-b;
break;}
case 3:
{cout<<"The product is- "<<a*b;
break;}
case 4:
{cout<<"The quotient is- "<<a/b;
break;}
case 5:
return 0;
default: cout<<"Invalid choice";
break;}}
return 0;
}