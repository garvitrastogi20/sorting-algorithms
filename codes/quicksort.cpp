#include<bits/stdc++.h>
using namespace std;


int f(int arr[], int low, int high)
{
    int pivot=arr[low];
    int i= low;
    int j=high;
    while(i<j)
    {
        while(arr[i]<=pivot && i<=high-1)
        {
            i++;
        }
        while(arr[j]>pivot && j>=low)
        {
            j--;
        }
        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;

}

void quicksort(int arr[], int low, int high)
{
    if(low<high)
    {
        int partition= f(arr, low, high);
        quicksort(arr, low, partition-1);
        quicksort(arr, partition+1, high);
    }
}

int main()
{
    int n;
    cout<<"Enter the number of elements in array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int low=0;
    int high=n-1;
    quicksort(arr, low, high);
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}