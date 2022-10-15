#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int array[n];

    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    for(int j=0;j<n;j++)
    {
        int min=array[0];
        int max=array[0];

        if (array[j]>max)
            max=array[j];

        if (array[j]<min)
            min=array[j];


    }

}
