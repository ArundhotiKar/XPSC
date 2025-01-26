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
  int cnt = 1;
  int Maxn = 1e5;
  vtr a(Maxn + 1);
  int ans = 1;
  a[1] = 1;

  for (int i = 2; i <= Maxn;)
  {
    int j;
    for (j = i; j <= min(2 * i, Maxn); j++)
    {
      a[j] = ans + 1;
    }
    ans++;
    i = j;
  }

  while (t--)
  {
    int n;
    in n;
    pr a[n] nl;
  }
  return 0;
}

// Arundhoti Kar@
// From PUST