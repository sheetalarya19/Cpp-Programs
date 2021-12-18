#include<bits/stdc++.h>
using namespace std;
void reverse_string(string s)
{
    stack<string> st;
    string temp = "";
    
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == ' ')
        {
            st.push(temp);
            temp = "";
        }
        else
        {
            temp = temp + s[i];
        }
        
    }
    st.push(temp);
    while(!st.empty())
    {
        temp = st.top();
        cout<<temp<<" ";
        st.pop();
    }
    cout<<"\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s = "I love to code";
       // getline(cin, s);
        reverse_string(s);
        
    }
    return 0;
}