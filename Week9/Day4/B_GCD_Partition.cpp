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
     int n;
     in n;
     vector<ll>a(n),pre_sum(n);
     in a[0];
     pre_sum[0]=a[0];
     for(int i=1; i<n; i++ )
     {
        in a[i];
        pre_sum[i]=pre_sum[i-1]+a[i];
     }
     ll ans=0;
     for(int i=0; i<n-1; i++)
     {
         ll k1=pre_sum[i];
         ll k2=pre_sum[n-1]-pre_sum[i];
         ans=max(ans,__gcd(k1,k2));
     }
     pr ans nl;
   }
  return 0;
}

//Arundhoti Kar@
//From PUST