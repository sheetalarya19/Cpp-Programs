#include<bits/stdc++.h>
using namespace std;
void swap(int *xp,int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void selectionSort(int a[], int n)
{
    int i,j, min_idx;
    for(i=0;i<n-1;i++)
    {
        min_idx = i;
        for( j=i+1;j<n;j++)
        {
            if(a[j]<a[min_idx])
            {
                min_idx=j;
            }
        }
        swap(&a[i],&a[min_idx]);
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   selectionSort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}