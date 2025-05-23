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
   int n,k;
   in n>>k;
   vector<ll>v(n);
   for(int i=0; i<n; i++)
   {
      in v[i];
   }
   for(int i=0; i<k; i++)
   {
      int key, l = 0, r = n - 1, ans = -1, mid;
      in key;
      while (l <= r) {
         mid = (l + r) / 2;
         if (key > v[mid]) 
         {
            l = mid + 1;
         }
         else 
        {
            ans = mid;
            r = mid - 1;
         }
      }
      if(ans==-1)
      {
        pr n+1 nl;
      }else
      {
        pr ans + 1 << '\n';
      }
   }

  return 0;
}

//Arundhoti Kar@
//From PUST