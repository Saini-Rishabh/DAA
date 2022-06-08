#include<bits/stdc++.h>
using namespace std;
void ins_sort(int a[],int n)
{
    int x,y,p=0;
    int s=0;
    int c=0;

    for(x=1;x<n;x++)
    {
        p=a[x];
        y=x-1;

        while(y>=0 && p<a[y])
        {
            c++;
            a[y+1]=a[y];
            s++;
            y--;
        }
        s++;
        a[y+1]=p;
    }
    cout<<"No. of comparisons:"<<c;
    cout<<"No. of Shift:"<<s;
}
int  main()
{
    int t;
    cin>>t;

    for(int j=0;j<t;j++)
    {
        int k;
        cin>>k;
        int a[k];
        for (int i=0;i<k;i++)
        cin>>a[i];
        
        ins_sort(a,k);
    }
    return 0;
}