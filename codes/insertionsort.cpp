#include<bits/stdc++.h>
using namespace std;

void insertionsort(int n, int arr[])
{
    for(int i=0;i<n;i++)
    {
        int j=i;
        while(j>0 &&arr[j-1]>arr[j])
        {
            swap(arr[j-1], arr[j]);
            j--;
            cout<<"runs\n";
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
    insertionsort(n, arr);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
//best case Time Complexity: O(N)
//worst case Time Complexity: O(N^2)