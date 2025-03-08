//delete an element from the end of an array

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"after deleting the last element: ";
    for(int i=0; i<n-1; i++)
    {
        cout<<arr[i]<<" ";
    }
}