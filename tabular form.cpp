#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    char character;
    int integer;
    float floating_number;
    cout<<"Enter character, integer and float"<<endl;
    cin>>character>>integer>>floating_number;
    cout<<setfill(' ')<<"Character"<<setw(10)<<setfill(' ')<<"Integer"<<setw(10)<<setfill(' ')<<"Float"<<endl;
    cout<<setfill(' ')<<character<<setw(15)<<setfill(' ')<<integer<<setw(15)<<setfill(' ')<<floating_number<<endl;
    return 0;


}