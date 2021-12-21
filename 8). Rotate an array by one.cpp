#include<bits/stdc++.h>
using namespace std;
void rotate(int a[] , int n)
{
    int x = a[n-1];
    for(int i=n-1;i>0;i--)
    {
        a[i] = a[i-1];
    }
    a[0] = x;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5}, i;
    int n = sizeof(arr) /
            sizeof(arr[0]);
            rotate(arr,n);
            for(int i=0;i<n;i++)
            {
                cout<<arr[i]<<" ";
            }
}