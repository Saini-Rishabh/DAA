#include<iostream>
using namespace std;

int comp=1;
int part(int A[],int lb,int ub,int key)
{
    int flag=0;
    while(lb<=ub)
    {
       int m=(lb+ub)/2;
       if(A[m]>key)
       {
          comp++;
          comp=part(A,lb,m,key);
          return comp;
          
       }
       else if(A[m]<key)
       {
           comp++;
           comp=part(A,m+1,ub,key);
           return comp;
       }
       else
       {
           cout<<"key found after:"<<comp;
           flag=1;
           return comp;
       }
       break;
    }
    if(flag==0)
    cout<<"Key not found";
    return comp;

}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,key;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        cin>>key;
        comp=part(A,0,n-1,key);
    }
    return 0;
}
