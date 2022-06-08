#include<bits/stdc++.h>
using namespace std;
int Swap;
int comp=0;
int partition(int A[],int l,int r)
{
    int x=(rand()%(r-l+1))+l;  //This two line of code makes it the code of Randomized quick
    swap(A[x],A[r]);
    int pivot=A[r];   //in this sorting last element is chosen as pivot but quicksort can have any element as its pivot..
    int i=(l-1);
    for(int j=l;j<r;j++)
    {
         if(A[j]<pivot)
        {
            i++;
            swap(A[i],A[j]);
            Swap++;
        }
        comp++;
    }
    swap(A[i+1],A[r]);
    Swap++;
    return(i+1);
}
void quicksort(int A[],int l,int r)
{
    if(l<r)
    {
        int p=partition(A,l,r);
        quicksort(A,l,p-1);
        quicksort(A,p+1,r);
    }
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        comp=0;
        Swap=0;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++)
        cin>>A[i];

        quicksort(A,0,n-1);
        cout<<"Array after sorting will be:";
        for(int i=0;i<n;i++)
        cout<<A[i]<<" ";
        cout<<"\nSwap:"<<Swap;
        cout<<"\nComparison:"<<comp;

        
    }
    return 0;
}