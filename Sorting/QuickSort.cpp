#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int partition(int a[], int low, int high)
{
    int pivot=a[low];
    int i=low+1;
    int j= high;
    while(i<j)
    {
        while(a[i]<=pivot)
        {
            i++;
        }
        while(a[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
            swap(a[i], a[j]);
        }       
    }
    swap(a[low],a[j]);
        return j;
}
void quicksort(int a[], int low, int high)
{
    if(low<high)
    {
        int j=partition(a, low, high);
        quicksort(a, low, j-1);
        quicksort(a, j+1, high);
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
    quicksort(a,0,n-1);
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}