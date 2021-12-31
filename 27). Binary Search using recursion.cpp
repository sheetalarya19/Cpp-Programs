#include<bits/stdc++.h>
using namespace std;
int binarySearch(int a[], int l,int r, int find)
{
    if(r>=l)
    {
        int mid = l + (r-l)/2;
        if(a[mid] == find)
        {
            return mid;
        }
        if(a[mid]>find)
        {
            return binarySearch(a,l,mid-1,find);
        }
        return binarySearch(a,mid+1,r,find);
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int a[n], find;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>find;
    int res = binarySearch(a,0,n-1,find);
    (res == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << res;
    return 0;
}