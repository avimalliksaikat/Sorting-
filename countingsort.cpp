#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    cout << "Enter array element : ";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maxx=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxx)
        {
            maxx=arr[i];
        }
    }
    int cou[maxx+1];
    int out[n];
    for(int i=0;i<maxx+1;i++)
    {
        cou[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        cou[arr[i]]++;
    }
    for(int i=1;i<maxx+1;i++)
    {
        cou[i]=cou[i]+cou[i-1];
    }
    for(int i=n-1;i>=0;i--)
    {
        out[cou[arr[i]]-1]=arr[i];
        cou[arr[i]]--;
    }
    for(int value : out)
    {
        cout << value << " ";
    }
}
