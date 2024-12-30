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
   ll x;
   in x;
   ll a=1,b=x;
   for(ll i=2; i*i<=x; i++)
   {
      if(x%i==0 && (x/i)!=i)
      {
          ll CA=i;
          ll CB=x/i;
          //pr i nl;
          if(max(a,b)>max(CA,CB) && __gcd(CA,CB)==1)
          {
              a=CA;
              b=CB;
          }
      }
   }
   pr a <<" "<< b nl;
  return 0;
}

//Arundhoti Kar@
//From PUST