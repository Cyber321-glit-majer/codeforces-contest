#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
         
        int cnt=0;
      
       set<int>s;
       for(int i=1;i<=k;i++)
       {
           s.insert(i);
       }
       for(int i=0;i<k;i++)
       {
           if(s.find(a[i])!=s.end())
           {
             s.erase(a[i]);
           }
       }
       cout<<s.size()<<endl;
       
    }
    return 0;
}
