#include <iostream>
#include <algorithm>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    int n1 = mid - low + 1;
    int n2 = high - mid;

    int left[n1], right[n2];
    for(int i = 0; i < n1; i++)
        left[i] = arr[low + i];
    for(int j = 0; j < n2; j++)
        right[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = low;

    while(i < n1 && j < n2)
    {
        if(left[i] < right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while(i < n1)
    {
        arr[k] = left[i];
        i++;
        k++;
    }
    while(j < n2)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int low, int high)
{
    if(low >= high)
        return;

    int mid = low + (high - low)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main()
{
    int arr[] = {64, 28, 97, 40, 12, 72, 84, 24, 38, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 50, flag = 0;
    mergeSort(arr, 0 , n - 1);

    // for(int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<< " ";
    // }
    // cout<<endl;
    int i = 0, j = n - 1;
    while(i < j)
    {
        if(arr[i] + arr[j] == target)
        {
            flag = 1;
            cout<<arr[i]<< " "<<arr[j]<<" "<<endl;
        }
        if(arr[i] + arr[j] < target)
            i++;
        else
            j--;
    }
    if(!flag)
        cout<<"No Such pairs exist";

}