#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void selectionsort(int n, int a[])
{
    for(int i=0; i<n-1; i++)
    {
        int min=i;
        for(int j=i+1; j<n;j++)
        {
            if(a[min]>a[j])
            {
                min=j;
            }
        }
        swap(a[i], a[min]);
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
    selectionsort(n, a);
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}