#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        int flag=0;
        cin>>n;
        int A[n];
        for(int i=1;i<=n;i++)
        {
            cin>>A[i];
        }
        for(int i=1;i<=n-2;i++)
        {
            for(int j=i+1;j<=n-1;j++)
            {
                for(int k=j+1;k<=n;k++)
                {
                    if(A[i]+A[j]==A[k])
                    {
                        cout<<i<<" "<<j<<" "<<k;
                        flag++;
                    }
                }
            }
        }
        if(flag==0)
        {
            cout<<"Sequence Not Detected\n";
        }
    }
    return 0;
}