#include<iostream>
using namespace std;

int main()
{
    int balance=3000;
    for(int date=1;date<=30;date++)
    {
        if(date%2==0){
            continue;
        }
        else{
        cout<<"You can go Out:"<<date<<endl;
        balance=balance-300;
        if(balance==0){
            break;
        }
        }
    }
}
