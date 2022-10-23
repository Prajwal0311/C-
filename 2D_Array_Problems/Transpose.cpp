#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    if(n!=m){
        cout<<"Not a square matrix.";
        return 0;
    }
    else
    {
        int arr[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0 ;j<m;j++)
            {
                cin>>arr[i][j];
            }
        }

        // to calculate transpose.
        for(int i=0; i<n;i++)
        {
            for(int j=i ;j<m;j++)               //we swap only upper triangular elements with lower triangular elements.
            {
                // to swap.
                int temp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
        
        }

        // to print.
        cout<<"Transpose is :"<<endl;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }

    }


}