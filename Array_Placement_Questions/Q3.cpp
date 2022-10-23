// Longest arithmetic SubArray Length  (Google Kickstart)

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int ans=2;
    int pd=arr[1]-arr[0];     //previous common difference
    int j=2;                   
    int cur=2;                // current length

    while( j<n)
    {
        if(pd==arr[j]-arr[j-1])
        {
            cur++;
        }
        else
        {
            pd=arr[j]-arr[j-1];
            cur=2;
        }
        ans=max(ans,cur);
        j++;
    }

    cout<<ans<<endl;
    return 0;

}