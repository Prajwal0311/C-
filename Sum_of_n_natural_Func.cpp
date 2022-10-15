#include<iostream>
using namespace std;

int sum(int n)
{
    if (n==0)
    {
        return 0;
    }
    else
    {
        return ((n)*(n+1)/2);
    }
}

int main()
{
    int n;
    cin>>n;
    int total=sum(n);
    cout<<total<<endl;
}

