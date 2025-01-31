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
    int n;
    ll x, y, sum = 0;
    in n >> x >> y;
    vtr a(n);
    for (int i = 0; i < n; i++)
    {
      in a[i];
      sum += a[i];
    }
    srt(a);
    ll ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
      sum -= a[i];
      int l = i + 1, r = n - 1;
      int f1 = -1, f2 = -1;
      while (l <= r)
      {
        int mid = l + (r - l) / 2;
        if (sum - a[mid] >= x && sum - a[mid] <= y)
        {
          f1 = mid;
          r = mid - 1;
        }
        else if (sum - a[mid] < x)
        {
          r = mid - 1;
        }
        else
        {
          l = mid + 1;
        }
      }
      l = i + 1, r = n - 1;
      while (l <= r)
      {
        int mid = l + (r - l) / 2;
        if (sum - a[mid] >= x && sum - a[mid] <= y)
        {
          f2 = mid;
          l = mid + 1;
        }
        else if (sum - a[mid] < x)
        {
          r = mid - 1;
        }
        else
        {
          l = mid + 1;
        }
      }
      if (f1 != -1 && f2 != -1)
      {
        ans += (f2 - f1 + 1);
      }
      sum += a[i];
    }
    pr ans nl;
  }
  return 0;
}

// Arundhoti Kar@
// From PUST
