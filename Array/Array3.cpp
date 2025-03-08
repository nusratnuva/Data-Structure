//insert an element at any position given by user(Array)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, value, pos; //position
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n+1];
    cout<<"enter the elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<" position: ";
    cin>>pos;
    while(pos<1||pos>n+1)
    {
        cout<<"invalid position"<<endl;
        cout<<"enter new position: ";
        cin>>pos;
    }
    for(int i=n-1; i>=pos-1; i--){
        arr[i+1]=arr[i];
    }
    cout<<"enter the value you want to insert: ";
    cin>>value;
    arr[pos-1]=value;
    for(int i=0; i<=n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
