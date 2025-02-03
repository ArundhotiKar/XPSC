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
void solve()
{
  int n, k;
  in n >> k;
  if (n == k)
  {
    vtr a;
    for (int i = 1; i <= n; i++)
    {
      ll x;
      in x;
      if (i % 2 == 0)
      {
        a.push_back(x);
      }
    }
    int c = 1;
    for (int i = 0; i < a.size(); i++)
    {
      if (a[i] != c)
      {
        break;
      }
      c++;
    }
    pr c nl;
    return;
  }
    vtr a(n+1);
    for (int i = 1; i <= n; i++)
    {
      in a[i];
    }
    int c=1;
    for(int i=2; i<=(n-(k-2)); i++ )
    {
       if(a[i]!=1)
       {
          pr 1 nl;
          return;
       }
    }
    pr 2 nl;

}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  in t;
  while (t--)
  {
    solve();
  }
  return 0;
}

// Arundhoti Kar@
// From PUST