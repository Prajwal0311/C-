#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

int element;
cout<<"enter the element:";
cin>>element;
int flag=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0 ;j<m;j++)
        {
            if(arr[i][j]==element)
            {
                cout<<"element Found"<<endl;
                flag=1;
                return 0;
                
            }
        }
    }
    if(flag==0)
    {
        cout<<"element not Found!"<<endl;
    }

    return 0;
}