#include<iostream>
using namespace std;

int LinSearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==n)
        {
            return i;
        }


    }
    return 0;

}

int main()
{
    int n;
    cin>>n;

    int key;
    cin>>key;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<LinSearch(arr,n,key)<<endl;

    return 0;

}
