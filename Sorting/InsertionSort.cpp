#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void insertionsort(int n, int a[])
{
    for(int i=1; i<n; i++)
    {
        int current= a[i];
        int previous= i-1;
        while(previous>=0 && a[previous]>current)
        {
            a[previous+1]=a[previous];
            previous--;
        }
        a[previous+1]=current;
        }
}
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    insertionsort(n, a);
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}
