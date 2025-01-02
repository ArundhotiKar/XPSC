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
   vector<ll>p(n);
   ll sum=0,pre=0;
   for(int i=0; i<n; i++)
   {
      in p[i];
      sum+=p[i];
   }

   srt(p);
   ll ans=LONG_LONG_MAX;
   for(int mask=0; mask<(1<<n); mask++)
   {
      ll groupA=0;
      for(int i=0; i<n; i++)
      {
          if(mask&(1<<i))
          {
             groupA+=p[i];
          }
      }
      ll groupB=sum-groupA;
      ans=min(ans, abs(groupA-groupB));
   }
   pr ans nl;

  return 0;
}

//Arundhoti Kar@
//From PUST