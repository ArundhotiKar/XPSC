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
  int n;
  in n;
  vtr a(n);
  for (int i = 0; i < n; i++)
  {
    in a[i];
  }
  vector<int> mod_vals;
  map<int, int> mp;
  for (int i = 0; i < n; i++)
  {
    int tem = a[i] % 10;
    if (tem == 1)
    {
      if (mp[tem] < 3)
      {
        mod_vals.push_back(a[i] % 10);
        mp[tem]++;
      }
    }
    else
    {
      if (mp[tem] < 2)
      {
        mod_vals.push_back(a[i] % 10);
        mp[tem]++;
      }
    }
  }

  int sz = mod_vals.size();

  for (int i = 0; i < sz; i++)
  {
    for (int j = i + 1; j < sz; j++)
    {
      for (int k = j + 1; k < sz; k++)
      {
        if ((mod_vals[i] + mod_vals[j] + mod_vals[k]) % 10 == 3)
        {
          cout << "YES\n";
          return;
        }
      }
    }
  }
  cout << "NO\n";
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