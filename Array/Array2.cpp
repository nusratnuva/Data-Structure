//insert an element at the beginning of an array

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, value;
    cout<<" enter the size of array: ";
    cin>>n;
    int arr[n+1];
    cout<<"enter the elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=n-1; i>=0; i--){
        arr[i+1]=arr[i];
    }
    cout<<" enter the value you want to input: ";
    cin>>value;
    arr[0]=value;
    for(int i=0; i<=n; i++)
    {
        cout<<arr[i]<<" ";
    }

}