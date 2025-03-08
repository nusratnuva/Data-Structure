#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void bubblesort(int n, int a[])
{
    int counter=1;
    while(counter<n){
        for(int i=0; i<n-counter; i++)
        {
            if(a[i]>a[i+1])
            {
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        counter++;
    }

}
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter Elements: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    bubblesort(n, a);
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}