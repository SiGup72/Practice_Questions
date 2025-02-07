#include <iostream>
#include <iomanip>
using namespace std;
int main()
{float n1,n2,c;
cout<<"Enter two float umbers"<<endl;
cin>>n1>>n2;
c=n1/n2;
cout<<fixed<<setprecision(2);

cout<<"Division result is "<<c;
return 0;
}