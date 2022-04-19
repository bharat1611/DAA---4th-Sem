
#include<iostream>
using namespace std;

void selsort(int a[],int n)
{
    int c=0;
    for(int i=0;i<n-1;i++)
    {
        int m=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[m]>a[j])
            m=j;
        }
        if(a[i]!=a[m])
        {
            int temp=a[i];
            a[i]=a[m];
            a[m]=temp;c++;
        }
    }
    cout<<"No of shifts : "<<c<<endl;
}
int main()
{
    int a[] = {2,4,5,1,3,78,56,10};
    int n = sizeof(a)/sizeof(a[0]);
    selsort(a, n);
    for(int i=0; i < n; i++)
    cout<<a[i]<<" ";
}