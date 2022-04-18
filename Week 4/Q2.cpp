#include <iostream>
using namespace std;

int comp, swaps;
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    for(int j = low; j < high; j++)
    {
        if(arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
            swaps++;
        }
        comp++;
    }
    swap(arr[i + 1], arr[high]);
    swaps++;
    return (i + 1);
}

void Quicksort(int arr[], int low, int high)
{
    if(low < high)
    {
        int pi = partition(arr, low, high);
        Quicksort(arr, low, pi - 1);
        Quicksort(arr, pi + 1, high);
    }
}

int main()
{
    int arr[] ={23,65,21,76,46,89,45,32};
    int n = sizeof(arr)/sizeof(arr[0]);
    Quicksort(arr, 0, n - 1);

    for(int i = 0; i< n; i++)
        cout<<arr[i] << " ";

    cout<<endl<<"Comparisons : "<<comp;
    cout<<endl<<"Swaps : "<<swaps;

}