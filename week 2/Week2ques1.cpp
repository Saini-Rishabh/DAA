#include<iostream>
using namespace std;
int flag;
int part(int A[],int lb,int ub,int key)
{   
    while(lb<=ub)
    {
        int m=(lb+ub)/2;
        if(A[m]>key)
        {
            flag=part(A,lb,m,key);
            return flag;
        }
        else if(A[m]==key)
        {
            flag++;
        }
        else if(A[m]<key)
        {
            flag=part(A,m+1,ub,key);
            return flag;
        }
        return flag;
    }
    return flag;
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
        flag=0;
        flag=part(A,0,n-1,key);
        if(flag!=0)
        cout<<key<<" "<<flag;
        else 
        cout<<"Key Not Present";
    }
    return 0;
}