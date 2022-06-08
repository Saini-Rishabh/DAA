#include<bits\stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        int comp=0;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        int k=sqrt(n);
        cout<<k;
        for(int i=0;i<k;i++)
        {
            if(A[k*i]<key && A[k*(i+1)]>key)
            {
                while(A[j]<=key)
                {
                    if(A[j]==key)
                    {
                        cout<<"Present"<<" "<<comp;
                        break;
                    }


                    flag++;
                }
            }
            comp++;
        }

    }
    return 0;
}
