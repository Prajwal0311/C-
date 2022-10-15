#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int flag =0;

    for(int i=2 ; i<=sqrt(n) ; i++)
    {
        if(n%i==0)
        {
            flag=1;
            cout<<"Non prime number"<<endl;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"Prime number"<<endl;
    }
    return 0;
}
