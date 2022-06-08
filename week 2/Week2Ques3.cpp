#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int s;
        cin>>s;
        int pair=0,key;
        
        int A[s];
        for(int i=0;i<s;i++)
        {
            cin>>A[i];
        }
        cin>>key;
        sort(A,A+s);
        for(int i=0;i<s-1;i++)
            for(int j=i+1;j<s;j++)
            {
                if(A[j]-A[i]==key)
                pair++;
            }
        if(pair==0)
        cout<<"No Sequence found";
        else 
        cout<<pair;
    }
    return 0; 
}