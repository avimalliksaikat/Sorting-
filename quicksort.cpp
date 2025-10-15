#include<iostream>
#include<vector>
//#include<utility>
using namespace std;
int parTition(vector<int> &arr,int st, int en)
{
    int index=st-1;
    int pivit = arr[en];
    for(int j=st;j<=en-1;j++)
    {
        if(arr[j] <= pivit)
        {
        index++;
        swap(arr[j],arr[index]);
        }
    }
    index++;
    swap(arr[index],arr[en]);
    return index;
}
void quicksort(vector<int> &arr,int st,int en)
{
    if(st<en)
    {
    int pivotindex = parTition(arr,st,en);
    quicksort(arr,st,pivotindex-1);
    quicksort(arr,pivotindex+1,en);
    }
}
int main()
{
    vector<int> arr = {2,1,5,3,4,6,8,7,9};
    quicksort(arr,0,arr.size()-1);

    for(int value : arr)
    {
        cout << value << " ";
    }
}

