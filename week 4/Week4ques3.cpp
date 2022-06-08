#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,k;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++)
        cin>>A[i];

        sort(A,A+n);
        cin>>k;
        if(k<n)
        cout<<A[k-1];
        else
        cout<<"Not Present";
    }
    return 0;
}