#include<bits/stdc++.h>
using namespace std;

void SelectionSort(int A[],int n)
{
    int min_ind,Swap=-1;
    int comp=0;
    for(int i=0;i<n;i++)
    {
        min_ind=i;   //Here Minimum index is taken as a pointer to carry out swapping operation
        for(int j=i+1;j<n;j++)
        {
            if(A[j]<A[min_ind])
            {
                min_ind=j;
            }
            comp++;
        }
        swap(A[min_ind],A[i]);
        Swap++;
    }
    cout<<"Comparisons:"<<comp;
    cout<<"Swaps:"<<Swap;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++)
        cin>>A[i];

        SelectionSort(A,n);
    }
    return 0;
}