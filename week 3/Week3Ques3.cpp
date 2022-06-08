#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,flag=0;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++)
        cin>>A[i];
        sort(A,A+n);
        for(int i=0;i<n;i++)
        {
            if(A[i+1]-A[i]==0)
            flag++;
        }
        if(flag!=0)
            cout<<"YES";
        else 
        cout<<"No";
    }
    return 0;
}