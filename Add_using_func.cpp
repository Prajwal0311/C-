#include<iostream>
using namespace std;

void print(int num)
{
    cout<<num<<endl;
    return ;
}
int add(int num1 , int num2)
{
    int sum=num1+num2;
    return sum;
}

int main()
{
    int num1,num2;
    cin>>num1>>num2;

    cout<<"num 1 is:"<<num1<<endl;
    cout<<"num 2 is:"<<num2<<endl;
    cout<<add(num1,num2)<<endl;
    return 0;
}
