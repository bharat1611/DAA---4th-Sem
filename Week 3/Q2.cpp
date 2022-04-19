
#include<iostream>
using namespace std;

void selsort(int a[],int n)
{
    int shfts = 0, comp = 0;
    for(int i=0;i<n;i++)
    {
        int m=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[m] > a[j])
            {
                m=j;
                comp++;
            } 
        }
        if(a[i] != a[m])
        {
            comp++;
            int temp=a[i];
            a[i]=a[m];
            a[m]=temp;
            shfts++;
        }
    }
    cout<<"Comparisons : "<< comp<<endl;
    cout<<"Swaps : "<<shfts<<endl;
}
int main()
{
    int a[] = {-13, 65, -21, 76, 46, 89, 45, 12};
    int n = sizeof(a)/sizeof(a[0]);
    selsort(a, n);
    for(int i=0; i < n; i++)
    cout<<a[i]<<" ";
}