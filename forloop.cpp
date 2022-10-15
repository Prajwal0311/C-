#include<iostream>

using namespace std;

int main()
{
    int sum=0;
    int counter;
    int n;
    cin>>n;

    for(counter=1;counter<=n;counter++){
        sum+=counter;
    }
    cout<<"Sum is :"<<sum<<endl;
}
