#include<iostream>
using namespace std;
void insertionsort(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        int small = i;
        for(int j=i+1;j<size-1;j++)
        {
            if(arr[j]<arr[i])
            {
                swap(arr[j],arr[small]);
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i] ;
    }
    insertionsort(arr,n);

    for(int i=0;i<n;i++)
    {
        cout << arr[i];
    }
}
