#include<bits/stdc++.h>
using namespace std;
int power(int n, int a)
{
    int i,power=1;
   if(a == 0)
   return 1;
   for(i=1;i<=a;i++)
   power=power*n;
   return power;
 
    
}
int main()
{
    int n,a;
    cin>>n>>a;
    
    cout<<power(n, a)<<"\n";
}