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
      int n, q;
      in n>> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        in a[i];
    }
    for (int i = 0;i < q;i++) {
      int key, l = 0, r = n - 1, mid;
      in key;
      bool found = false;
      while (l <= r) {
         mid = (l + r) / 2;
         if (key == a[mid]) {
            found = true;
            break;
         }
         else if (key < a[mid]) {
            r = mid - 1;
         }
         else {
            l = mid + 1;
         }
      }
      if (found) {
         pr "YES" << '\n';
      }
      else {
         pr "NO" << '\n';
      }
   }

    return 0;
}

// Arundhoti Kar@
// From PUST