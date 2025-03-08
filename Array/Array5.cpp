//delete an element from the beginning of an array

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter the elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];

    }
    for(int i=0; i<n; i++ )
    {
        arr[i]=arr[i+1];
    }
    for(int i=0; i<n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
}