#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements: ";
    for( i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int value;
    cout<<"Enter value"<<endl;
    cin>>value;
    for( i=0; i<n;i++)
    {
        if(arr[i]==value){
        cout<<"found at index "<<i<<endl;
        break;
        }
    }
    if(i==n)
    {
        cout<<"Not Found";
    }
}