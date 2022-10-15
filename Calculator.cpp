#include<iostream>
using namespace std;

int main()
{
    int a,b;
    char operation;
    cout<<"Enter number a:";
    cin>>a;

    cout<<"Enter number b:";
    cin>>b;

    cout<<"Enter the operation : + - * / :";
    cin>>operation;

    switch(operation)
    {
    case '+':
        cout<<"The sum is : "<< a+b <<endl;
        break;

    case '-':
        cout<<"The difference is : "<<a-b<<endl;
        break;

    case '*':
        cout<<"The product is : "<<a*b<<endl;
        break;

    case '/':
        cout<<"The quotient is :"<<a/b<<endl;
        break;

    default:
        cout<<"Invalid Operation!"<<endl;
        break;
    }

    return 0;

}

