#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {10, 10, 12, 34, 39, 55, 76, 85};
    int arr2[] = {10,10,11,20,30,34,51,55,69,72,89};

    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    int i = 0, j = 0;
    while(i < n1 && j < n2)
    {
        if(arr1[i] == arr2[j])
            cout<<arr1[i]<<" ";
        if(arr1[i] < arr2[j])
            i++;
        else
            j++;
    }
}