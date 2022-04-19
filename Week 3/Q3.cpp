#include<bits/stdc++.h>
using namespace std;
void findDuplicate(int a[], int x)
{
    int flag = 0;
    for(int i = 0; i < x; i++)
    {
        for(int j = i + 1; j < x; j++)
        {
            if(a[i] == a[j])
            {
                flag = 1;
                 break;
            }
        }
    }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
int main()
{
    int arr[] = {75, 65, 1, 65, 2, 6, 86, 2, 75, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    findDuplicate(arr, n);
}