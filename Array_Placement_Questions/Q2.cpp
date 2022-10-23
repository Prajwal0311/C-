// Given an array of size n , find the sum of all the subarray of the given array 

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    int current=0;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++)
    {
        current=0;
        for(int j=i;j<n-1;j++)
        {
            current+=arr[j];
            cout<<current<<endl;
        }
    }
    return 0;
}