#include <bits/stdc++.h>
#define ll long long
#define in cin >>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout <<
#define nl << endl;
using namespace std;
const ll MOD = 1e9 + 7;
ll power(ll x, ll y)
{
   ll ans = 1 % MOD;
   while (y)
   {
      if (y & 1)
      {
         ans = (1LL * ans % MOD * x % MOD) % MOD;
      }
      x = 1LL * x * x % MOD;
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
   while (t--)
   {
      int n, m;
      in n >> m;
      vtr a(n);
      for (int i = 0; i < n; i++)
      {
         in a[i];
      }
      set<ll> s;
      for (int i = 0; i < m; i++)
      {
         ll b;
         in b;
         s.insert(b);
      }
      bool ok = true;
      auto it = s.begin();
      a[0] = min(*it - a[0], a[0]);
      for (int i = 1; i < n; i++)
      {

         auto it = s.lower_bound(a[i] + a[i - 1]);
         if (it != s.end())
         {
            
            ll tem = *it - a[i];
            
            if(a[i]<a[i-1])
            {
               a[i]=tem;
            }else
            {
               a[i] = min(tem, a[i]);
            }
         }
         if (a[i] < a[i - 1])
         {
            pr "NO\n";
            ok = false;
            break;
         }
      }
      if (ok)
      {
         pr "YES\n";
      }
   }
   return 0;
}

// Arundhoti Kar@
// From PUST