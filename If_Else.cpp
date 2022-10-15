#include<iostream>
using namespace std;

int main()
{
    int savings;

    cin>>savings;

    if(savings > 5000){
        if(savings>10000)
        {
            cout<<"Lets go Goa!";
        }
        else
        {
            cout<<"Lets go Bangalore!";
        }
    }
    else if (savings >2000){
        cout<<"Lets Party!";
    }
    else
    {
        cout<<"I stay at home.";
    }
    return 0;
}
