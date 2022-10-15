#include<iostream>
using namespace std;

int main()
{
    int array[4]={10,20,30,40};
    for(int i=0; i<sizeof(array[4]);i++)
    {
        cout<<array[i]<<endl;
    }
}
