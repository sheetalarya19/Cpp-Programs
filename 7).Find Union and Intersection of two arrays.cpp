#include<bits/stdc++.h>
using namespace std;
void Printunion(int a[] ,int b[] , int m , int n)
{
    int i=0,j=0;
    while(i<m&&j<n)
    {
        if(a[i]<b[j])
        {
            cout<<a[i]<<" ";
            i++;
        }
        else if(a[i]>b[j])
        {
            cout<<b[j]<<" ";
            j++;
        }
        else if(a[i] == b[j])
        {
            cout<<a[i]<<" ";
            i++;j++;
        }
    }
    while(i<m)
    {
        cout<<a[i++]<<" ";
    }
    while(j<n)
    {
        cout<<b[j++]<<" ";
    }
}
void Printintersect(int a[] ,int b[] , int m , int n)
{
    int i=0,j=0;
    while(i<m&&j<n)
    {
        if(a[i]<b[j])
        {
           // cout<<a[i]<<" ";
            i++;
        }
        else if(a[i]>b[j])
        {
          //  cout<<b[j]<<" ";
            j++;
        }
        else if(a[i] == b[j])
        {
            cout<<a[i]<<" ";
            i++;j++;
        }
    }
    while(i<m)
    {
        i++;
    }
    while(j<n)
    {
        j++;
    }
}
int main()
{
   int arr1[] = { 1, 2, 4, 5, 6 };
    int arr2[] = { 2, 3, 5, 7 };
 
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
 
    // Function calling
    Printunion(arr1, arr2, m, n);
    cout<<endl;
    Printintersect(arr1, arr2, m, n);
}