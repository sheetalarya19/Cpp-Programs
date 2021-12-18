// Find Duplicate characters in a string Solution
#include<bits/stdc++.h>
using namespace std;
void dupli(string a)
{
    map<char , int> mp;
    int n = a.size();
    for(int i=0;i<n;i++)
    {
        mp[a[i]]++;
    }
    map<char , int>::iterator it;
    for(it = mp.begin();it!=mp.end();it++)
    {
        if(it->second>1)
        {
            cout<<it->first<<" "<<it->second<<"\n";
        }
    }
}
int main()
{
    string str;cin>>str;
    dupli(str);
}