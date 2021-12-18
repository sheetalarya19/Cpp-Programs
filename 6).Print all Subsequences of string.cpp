#include<bits/stdc++.h>
using namespace std;
void sub(string ans, int l , int r, string s)
{
	if(l==r)
	{
		cout<<ans<<"\n";
	}
	else
	{
		sub(ans,l+1,r,s);
		ans += s[l];
		sub(ans,l+1,r,s);
	}
}
int main()
{
	string s;
	cin>>s;
	sub("",0,s.size(),s);
}