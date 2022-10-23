// Given an array of size n ,output maximum a[0],a[0,1], a[0,1,2]....a[0,1...n-1]
#include<iostream>
using namespace std;

int main()
{
    int mx=-19999;
    int n;
    cin>>n;
    int array[n];

    for(int i=0;i<n;i++)
    {
        cin>>array[i];

    }

    for(int i=0;i<n;i++)
    {
        mx=max(mx,array[i]);
        cout<<mx<<endl;
    }
}