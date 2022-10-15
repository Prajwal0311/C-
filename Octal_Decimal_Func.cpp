#include<iostream>
using namespace std;

int O2D(int n)
{
    int y=0;
    int x=1;

    while(n>0)
    {
        int z=n%10;
        y+=x*z;
        x=x*8;
        n=n/10;
    }
    return y;
}


int main()
{
    int n;
    cin>>n;
    cout<<O2D(n)<<endl;
    return 0;
}
