#include<iostream>
using namespace std;

int main()
{
    //int i=1,sum1;
    //sum1=i++  +  ++i;    //i=1  + i=3  (Post increment: i++ -> i=1+1)
    //cout<<sum1<<endl;

    //int i=1;
    //int j=2;
//    int k;
//
//    k=i + j + i++ + j++ + ++i +  ++j;
//    cout<<k<<endl;

    int i=0;
    i=i++ - --i  + ++i - i--;
    cout<<i<<endl;
}
