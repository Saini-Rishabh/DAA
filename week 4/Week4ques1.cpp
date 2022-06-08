#include<bits/stdc++.h>
using namespace std;

int comp;
int Merge(int A[],int l,int q,int r)
{
    int n1=(q-l)+1;
    int n2=(r-q);
    int count=0;

    int L[n1],R[n2];

    for(int i=0;i<n1;i++)
        L[i]=A[l+i];
    for(int j=0;j<n2;j++)
        R[j]=A[q+1+j];

    int i=0;
    int j=0;
    int k=l;

    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        A[k++]=L[i++];
        else
        {
            A[k++]=R[j++];
            count=count+(q-i);
        }
        comp++;
    }
    while(i<n1)
    {
        A[k++]=L[i++];
    }
    while(j<n2)
    {
        A[k++]=R[j++];
    }
    return count;
}
int Mergesort(int A[],int l,int r)
{
    int count=0;
    if(l<r)
    {
        int q;
        q=(l+(r-l)/2);
        count+=Mergesort(A,l,q);
        count+=Mergesort(A,q+1,r);
        count+=Merge(A,l,q,r);
    }
    return count;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
       int n;
       comp=0;
       int count=0;
       cin>>n;
       int A[n];
       for(int i=0;i<n;i++)
       cin>>A[i];
       count=Mergesort(A,0,n-1);
       for(int i=0;i<n;i++)
       cout<<A[i]<<" ";
       cout<<"Comparisons:"<<comp;
       cout<<"Inversions:"<<count;
    }
    return 0;
}