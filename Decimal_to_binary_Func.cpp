#include<iostream>
using namespace std;

int d2b(int n)
{
  int x=1 ;              //2^0=1
  int ans=0;
  while(x<=n)
  {
    x*=2;
  }
  x=x/2;

  while(x>0)
  {
    int lastDigit=n/x;
    n-=lastDigit*x;
    x/=2;
    ans=ans*10+lastDigit;
  }
  return ans;
}

int main()
{
  int n;
  cin>>n;
  int ans=d2b(n);
  cout<<ans<<endl;

  return 0;
}
