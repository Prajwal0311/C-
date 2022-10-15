#include<iostream>

using namespace std;

int main()
{
    int num1, num2, num3;

    cout<<"Enter the 1st number:\n";
    cin>>num1;

    cout<<"Enter the 2nd number:\n";
    cin>>num2;

    cout<<"Enter the 3rd number:\n";
    cin>>num3;


    if(num1>num2 && num1>num3){
        cout<<" Maximum number is:"<<num1;
    }

    else if(num2>num1 and num2>num3){
        cout<<" Maximum number is:"<<num2;
    }
    else{
        cout<<" Maximum number is:"<<num3;
    }

    return 0;
}
