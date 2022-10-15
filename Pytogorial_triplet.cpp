#include<iostream>
#include<cmath>
using namespace std;

void pyth(int a,int b, int c)
{
    if(pow(c,2)== pow(a,2)+pow(b,2))
    {
        cout<<"Pythogorian Triplet"<<endl;
    }
    else{
        cout<<"Not a Pythogorian Triplet"<<endl;
    }

    return ;
}

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    pyth(a,b,c);

}
