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
   int n;
   in n;
   map<ll,ll>mp;
   for(int i=1; i<=n; i++)
   {
       int a,b;
       in a>>b;
       mp[a]++;
       mp[b]--;
   }
   ll sum=0,ans=0;
   for(auto m: mp)
   {
      sum+=m.second;
      ans=max(sum,ans);
   }
   pr ans nl;
  return 0;
}

//Arundhoti Kar@
//From PUST