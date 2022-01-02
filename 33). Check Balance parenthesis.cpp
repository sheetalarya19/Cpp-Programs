#include<bits/stdc++.h>
using namespace std;
bool ispar(string x)
    {
        // Your code here
        stack<int> s;
        for(auto i : x) {
            if(!s.empty())
            {
                if(s.top() == '(' && i == ')')
                {
                    s.pop();
                }
                else if(s.top() == '[' && i == ']')
                {
                    s.pop();
                }
                else if(s.top() == '{' && i == '}')
                {
                    s.pop();
                }
                   else
                   s.push(i);
             
            }
               else
                   s.push(i);
        }
        return s.empty();
    }
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(ispar(s)) {
            cout<<"Balanced\n";
        }
        else
        {
            cout<<"Not balanced\n";
        }
    }
}