#include <iostream>
using namespace std;
int main()
{
    int arr[6];
    int i,j;
    cout<<"Enter 6 elements for array"<<endl;
    for(i=0;i<6;i++)
    {cin>>arr[i];}

    for(i=0;i<6;i++)
    {for(j=0;j<6-i;j++)
    {if(arr[j]>arr[j+1]) //for descending change the sign '<'
    {int k=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=k;}}}

    cout<<"The sorted array is"<<endl;
    for(i=0;i<6;i++)
    {cout<<arr[i]<<endl;}
    return 0;


}