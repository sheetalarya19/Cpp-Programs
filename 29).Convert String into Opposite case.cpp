#include<bits/stdc++.h>
using namespace std;
void convertOpp(string &s)
{
    int n = s.size();
    for(int i = 0;i<n;i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            s[i] = s[i] - 32;
        }
        else if(s[i]>='A' && s[i]<='Z')
        {
            s[i] = s[i] + 32;
        }
    }
}
int main()
{
    string s;
    cin>>s;
    convertOpp(s);
    cout<<s<<"\n";
}