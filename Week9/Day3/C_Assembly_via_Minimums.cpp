#include<bits/stdc++.h>
#define ll long long
#define in cin>>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout<<
#define nl <<endl;
using namespace std;
const ll MOD=1e9+7;
ll power(ll x, ll y)
{
  ll ans=1%MOD;
  while(y)
 {
    if(y&1)
    {
       ans=(1LL * ans % MOD * x %MOD) % MOD;
    }
    x=1LL * x * x % MOD ;
    y >>= 1; 
 }
  return ans;
}
void solve()
{
    int n;
    in n;
    vector<ll>ans;
    set<ll>s;
    map<ll,ll>m;
    for(int i=0; i<(n*(n-1))/2; i++)
    {
        ll x;
        in x;
        s.insert(x);
        m[x]++;
    }
    int tem=n-1;
    for(ll i : s)
    {
       while(m[i]>0)
       {
         ans.push_back(i);
         m[i]-=tem;
         tem--;
       }
    }
    while (ans.size() < n) 
    {
        ans.push_back(ans.back());
    }
    for(ll i: ans)
    {
        pr i <<" ";
    }
    pr "\n";
    
}
int main()
{   
  ios::sync_with_stdio(false);
  cin.tie(nullptr); 
  int t;
  in t;
  while(t--)
  {
    solve();
  } 
  return 0;
}

//Arundhoti Kar@
//From PUST