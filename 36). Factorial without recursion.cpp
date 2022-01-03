#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int f=1,i=1;
    while(i<=n)
    {
        f = f*i;
        i++;
    }
    cout<<f<<"\n";
}