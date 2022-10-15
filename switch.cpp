#include<iostream>
using namespace std;

int main()
{
    char button;
    cout<<"Enter the button:"<<endl;
    cin>>button;

    switch(button)
    {
    case 'a':
        cout<<"Hello!"<<endl;
        break;

    case 'b':
        cout<<"Hola!"<<endl;
        break;
    case 'c':
        cout<<"Salut!"<<endl;
        break;

    default:
        cout<<"Iam still Learning!"<<endl;
        break;
    }

}
