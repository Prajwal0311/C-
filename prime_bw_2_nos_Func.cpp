#include<iostream>
#include<math.h>
using namespace std;

int prime(int num)
{
    int i;
    int flag=0;
    for(i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
           return false;
        }
    }
    return true;


}

int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(prime(i)){                                    //goes the function and checks for return type.
            cout<<i<<endl;
        }
    }
    return 0;
}
