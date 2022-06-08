#include<bits/stdc++.h>
using namespace std;

void CountSort(char A[],int n)
{
    int B[26]={0};
    for(int i=0;i<n;i++)
    {
        B[A[i]-'a']++;
    }
    char l = 'a';6
    int num = 0;
    for (int i = 0; i < 26; i++)
    {
        if (num <B[i])
        {
            num =B[i];
            l = l + i;
        }
    }
    if(num<=1)
    cout<<"No Duplicates";
    else
    cout<<l<<"--"<<num;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        char A[n];
        for(int i=0;i<n;i++)
        cin>>A[i];
        CountSort(A,n);
    }
    return 0;
}