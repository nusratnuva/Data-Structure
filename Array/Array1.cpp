//insert an element at the end of an array

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, value;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n+1];
    cout<<"enter the elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the value you want to insert: ";
    cin>>value;
    arr[n]=value;
    for(int i=0; i<=n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
