#include<iostream>
using namespace std;

int main()
{
 int n1,n2,n3;
 cin>>n1>>n2>>n3;
 int ans[n1][n3];              //multiplication matrix

    int arr1[n1][n2];          // 1st matrix
    cout<<"Enter 1st matrix:";
    cout<<endl;
 for(int i=0;i<n1;i++)
 {  
    for(int j=0;j<n2;j++)
    {
        cin>>arr1[i][j];
    }
 }
    cout<<"Enter 2md matrix:";
    cout<<endl;
    int arr2[n2][n3];          // 2nd matrix
    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<n3;j++)
        {
            cin>>arr2[i][j];
        }
    }

    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
        {
            ans[i][j]=0;
        }
    }



    //Multiplication

    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
        {
            for(int k=0;k<n3;k++)
            {
                ans[i][j]+=arr1[i][k] * arr2[k][j]; 
            }
        }
    }


    //Print
    cout<<"Result matrix:";
    cout<<endl;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0; 

}