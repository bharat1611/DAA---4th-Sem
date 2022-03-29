#include <iostream>
using namespace std;


int main()
{
    int flag=0, sum=0;
    int arr[] = {24, 28, 48, 71, 86, 89, 92, 120, 194, 201};

    int n = sizeof(arr)/sizeof(arr[0]);     // calculate the size of the array

    for(int i = 0; i < n; i++)
    {
        for(int j = 1; j < n; j++)
        {
            sum = arr[i] + arr[j];          // calculating the sum of index i and j to compare with k

            for(int k = 1; k < n; k++)
            {
                if(sum == arr[k])           // check whether the sum of indexes i and j == k
                {  
                    cout << i+1 << ", "<< j+1 <<", "<< k+1 <<endl;
                    return 0;
                }
            }
        }
    }
    if(flag==0)                             // if there is no such pair 
    {
        cout<<"No sequence"<<endl;
    }
}
