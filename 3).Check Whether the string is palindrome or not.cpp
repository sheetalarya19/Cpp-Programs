// Check whether a String is Palindrome or not Solution
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int h = s.size()-1,l=0;
    bool flag = 0;
    while(l<h)
    {
        if(s[l++] != s[h--])
        {
            cout<<"String is not palindrome"<<"\n";
           goto done;
           
        }
    }
  
    cout<<"String is a palindrome"<<"\n";
   done:
   
   return 0;
}