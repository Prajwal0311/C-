#include<iostream>
using namespace std;

int main()
{
    int n;
    int m;
    cin>>n>>m;
    int arr[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    // spiral order print
    int row_st=0;
    int row_end=n-1;
    int col_st=0;
    int col_end=m-1;

    while(row_st <= row_end  && col_st<=col_end)
    {
        // for row start
        for(int col=col_st;col<=col_end;col++)
        {
            cout<<arr[row_st][col]<<"->";
        }
        row_st++;

        // for column end
        for(int row=row_st;row<=row_end;row++)
        {
            cout<<arr[row][col_end]<<"->";
        }
        col_end--;

        // for row end
        for(int col=col_end;col>=col_st;col--)
        {
            cout<<arr[row_end][col]<<"->";
        }
        row_end--;

        // for column start
        for(int row=row_end;row>=row_st;row--)
        {
            cout<<arr[row][col_st]<<"->";
        }
        col_st++;
    }

    return 0;
}