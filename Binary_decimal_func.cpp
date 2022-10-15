#include<iostream>
using namespace std;


int B2D(int n)
{
    int y=0;
    int x=1;

    while(n>0)
    {
        int z=n%10;
        y+=x*z;
        x=x*2;
        n=n/10;
    }
    return y;
}

int main()
{
    int n;
    cin>>n;

    int answ=B2D(n);
    cout<<answ<<endl;
}
