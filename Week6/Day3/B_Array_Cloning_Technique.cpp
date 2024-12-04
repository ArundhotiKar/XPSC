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
  ios::sync_with_stdio(false);
  cin.tie(nullptr); 
  int t;
  in t;
  while(t--)
  {
    int n;
    in n;
    vector<ll>v(n);
    map<ll,int>cnt;
    int tp=0;
    set<ll>s;
    for(int i=0; i<n; i++)
    {
        in v[i];
        cnt[v[i]]++;
        s.insert(v[i]);
    }
    if(n==0||s.size()==1)
    {
        pr "0\n";
        continue;
    }
    for(auto i: cnt)
    {
        tp=max(tp,i.second);
        
    }
    ll ans=0;
    n=n-tp;
    ll cnt_loop=0;
    while(n>0)
    {
        
      ll tem=min(n,tp);
       ans+=tem;
       tp*=2;
       n-=tem;
       cnt_loop++;
    }
    pr ans+cnt_loop nl;

    
    
  } 
  return 0;
}

//Arundhoti Kar@
//From PUST