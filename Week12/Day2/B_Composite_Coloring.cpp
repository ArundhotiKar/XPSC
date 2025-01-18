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
vtr allPrime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
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
    int n;
    in n;
    vtr a(n);
    for (int i = 0; i < n; i++)
    {
      in a[i];
    }
    map<int, vtr> mp;
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < 11; j++)
      {
        if (a[i] % allPrime[j] == 0)
        {
          mp[allPrime[j]].push_back(i);
          break;
        }
      }
    }
    int color = 1;
    vtr ans(n);
    for (auto i : mp)
    {
      for (auto j : i.second)
      {
         ans[j]=color;
      }
      color++;
    }
    pr mp.size() nl;
    for (int i = 0; i < n; i++)
    {
      pr ans[i]<<" ";
    }
    pr "\n";
  }
  return 0;
}

// Arundhoti Kar@
// From PUST