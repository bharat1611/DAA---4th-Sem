#include <iostream>
using namespace std;


int binary_search(int a[],int n,int key)
{
    int ub=n-1, lb=0, mid=0, index=0;
    while(lb<=ub)
    {
        mid = lb + (ub-lb)/2;
        if(a[mid]==key)
            return key;
        if(a[mid]<key)
            lb = mid +1;
        if(a[mid]> key)
            ub = mid -1;

    }
    return -1;

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,key=0,count=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cin>>key;

        int ans=binary_search(a, n-1 , key);

        if(ans==key)
            {
                for(int i=0;i<n;i++)
                {
                    if(a[i]==key)
                        ++count;
                }
            }
        if(ans == -1)
            cout<<"Not Found";

        cout<<key<< " - "<<count<<endl;
    }
}
// 2
// 10
// 235 235 278 278 763 764 790 853 981 981
// 981
// 15
// 1 2 2 3 3 5 5 5 2 5 75 75 75 97 97 97
// 75