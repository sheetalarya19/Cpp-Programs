#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int temp=0,rem=0;
    while(n != 0)
    {
      rem = n%10;
      temp = rem + temp*10;
      n/=10;
    }
    cout<<temp;
}