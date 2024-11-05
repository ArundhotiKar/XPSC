#include<bits/stdc++.h>
#define ll long long
#define in cin>>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout<<
#define nl <<endl;
using namespace std;
int main()
{   
    int t;
    in t;
    while (t--)
    {
        int n;
        in n;
        vector<long long>v(n);
        map<ll,int>mp;
        set<ll>s;
        for(int i=0; i<n; i++)
        {
           in v[i];
           mp[v[i]]++;
           s.insert(v[i]);
        }
        if(s.size()==n)
        {
            cout<<n%2<<endl;
            continue;
        }
        int ans=n;
        for(auto i: s)
        {
            int tem=mp[i];
            if(tem*2<=n)
            {
                ans-=tem;
            }else
            {
             
              ans= tem*2 -n;
                break;
            }
        }
        if(ans==0)
        {
            if(n%2!=0)
            ans=1;
        }
        pr ans nl;
    }
    
  return 0;
}

//Arundhoti Kar@
//From PUST