#include<iostream>
using namespace std;

int fact(int n)
{
  int factorial=1;

  if( n==0  || n==1 ){
    return 1;
  }

  else{
      for(int i=2;i<=n;i++)
      {
        factorial=factorial*i;

      }
      return factorial;
  }
}

int main()
{
    int n;
    cin>>n;
    int factorial;
    factorial=fact(n);
    cout<<factorial<<endl;
}
