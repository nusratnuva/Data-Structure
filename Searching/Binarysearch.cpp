#include<iostream>
#include<algorithm>
using namespace std;
int binarysearch(int arr[],int n, int value)
{
    int low=0, high=n-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if (arr[mid]==value)
            return mid;
        else if (arr[mid]<value)
            low=mid+1;
        else
            high=mid-1;
    }
         return -1;
    }
    int main ()
          {
        int n;
        cout<<"enter size: ";
        cin>>n;
        int arr[n];
        cout<<"enter elements: ";
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(int i=0; i<n; i++)
        {
            cout<<arr[i]<<" ";
        }
        int value;
        cout<<"enter value: ";
        cin>>value;
        int result=binarysearch(arr,n,value);
        if(result!=-1)
            cout<<"Element found at index "<<result<<endl;
        else
            cout<<"element not found"<<endl;
        return 0;
}
