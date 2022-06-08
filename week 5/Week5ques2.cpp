#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,target;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++)
        cin>>A[i];
        sort(A,A+n);
        cin>>target;
        int I=0,j=n-1;
        while(I<j)
        {
            int sum=A[I]+A[j];
            if(sum<target)
            I++;
            else if(sum>target)
            j--;
            else
            {
                cout<<A[I]<<" "<<A[j];
                exit(0);
            }
            
        }
        cout<<"No Sequence Detected";
    }
    return 0;
}