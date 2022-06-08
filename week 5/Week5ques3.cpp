#include<bits/stdc++.h>
using namespace std;

void Print_Intersection(int A[],int n,int B[],int m)
{
    int i=0,j=0;
    while(i<n && j<m)
    {
        if(A[i]<B[j])
        i++;
        else if(A[i]>B[j])
        j++;
        else
        {
            cout<<A[i]<<" ";
            i++;
            j++;
        }
    }
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,m;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++)
        cin>>A[i];
        sort(A,A+n);
        cin>>m;
        int B[m];
        for(int j=0;j<m;j++)
        cin>>B[j];
        sort(B,B+m);
        Print_Intersection(A,n,B,m);
    }  
    return 0; 
}