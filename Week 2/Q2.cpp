#include <iostream>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,key=0,flag=0,sum=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int c=0;
        for(int i=n-1;i>=0;i--)
        {
            sum=a[i]-a[c];
            for(int j=0;j<n;j++)
            {
                if(sum==a[j])
                {
                    cout<<c<<","<<j<<","<<i<<endl;
                    flag=1;
                }
            }
            c++;
        }
        if(flag==0)
        {
            cout<<"No sequence"<<endl;
        }
    }
}
