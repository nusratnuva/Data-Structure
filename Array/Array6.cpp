//delete an array from any position given by user

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, pos;
   cout<<"enter the size of array: ";
   cin>>n;
    int arr[n];
    cout<<"enter the elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];

    }
    cout<<"enter position: ";
    cin>>pos;
     while(pos<1||pos>n)
    {
        cout<<"invalid position"<<endl;
        cout<<"enter new position: ";
        cin>>pos;
    }
    for(int i=pos-1; i<n; i++)
    {
        arr[i]=arr[i+1];
    }
    for(int i=0; i<n-1;i++)
    {
        cout<<arr[i]<<" ";
    }

}
