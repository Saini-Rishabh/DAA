#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,key,comp=1;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        cin>>key;
        for(int i=0;i<n;i++)
        {
            if(A[i]==key)
            break;

            else 
            comp++;
        }
        if(comp!=1)
        cout<<"Present"<<" "<<comp;

        else 
        cout<<"Absent";
    }
    return 0;
}