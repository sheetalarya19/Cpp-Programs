#include<bits/stdc++.h>
using namespace std;
string reverseWords(string s)
{
    string str;
    int i=0;
    stack<char> st;
    while(i<s.size())
    {
        while(i<s.size() && s[i]!='.')
        {
            st.push(s[i]);
            i++;
        }
        while(st.empty() == false)
        {
            str += st.top();
            st.pop();
        }
        if(i<s.size())
        {
            str += '.';
            i++;
        }
        
    }
    return str;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<reverseWords(s)<<"\n";
    }
}