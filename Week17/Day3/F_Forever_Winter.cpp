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
int main()
{   
  ios::sync_with_stdio(false);
  cin.tie(nullptr); 
   int t;
   in t;
   while(t--)
   {
      int n,m;
      in n>>m;
      map<int, set<int>>g;
      for(int i=1; i<=m; i++)
      {
          int u,v;
          in u>>v;
          g[u].insert(v);
          g[v].insert(u);
      }
      int leaf=-1;
      for(int i=1; i<=n; i++)
      {
        if(g[i].size()==1)
        {
            leaf=i;
            break;
        }
      }
      int y,x,par=-1;
      for(auto i: g[leaf])
      {
         y=g[i].size()-1;
         par=i;
         break;
      }
      for(auto i: g[par] )
      {
        if(g[i].size()!=1)
        {
            x=g[i].size();
            break;
        }
      }
      pr x <<" "<<y nl;

   }
  return 0;
}

//Arundhoti Kar@
//From PUST