#include<bits/stdc++.h>
using namespace std;
void print(string s)
{
for(int i=0;i<s.size();i++)
{
  cout<<s[i];
}
cout<<"\n";
}
void permute(string s, int l , int r)
{
  if(l==r)
  {
    print(s);
  }
  for(int i=l;i<=r;i++)
  {
     swap(s[i],s[l]);
     permute(s,l+1,r);
     swap(s[i] , s[l]);
  }
}
int main()
{
 string s = "ABC";
 permute(s,0,s.size()-1);
}