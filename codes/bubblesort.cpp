#include<bits/stdc++.h>
using namespace std;

void bubblesort(int n, int arr[])
{
    for(int i=n-1;i>=1;i--)
    {
        for(int j=0;j<=i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

// code can be optimized
void sort(int n,int arr[])
{
    int didswap=0;
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                didswap=1;
            }
        }
        if(didswap==0)
        {
            break;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bubblesort(n, arr);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    sort(n,arr);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

// time complexity of bubble sort is : O(n^2)-> worst or average complexity
// best case will be when the array is given as (1 2 3 4 5) already sorted



