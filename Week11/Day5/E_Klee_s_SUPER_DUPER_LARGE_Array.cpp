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
        ll n, k;
        in n >> k;
        ll term = k + n - 1;
        ll x = ((k - 1) * k) / 2;
        ll y = (term * (term + 1)) / 2;
        ll sum_of_whole_array = y - x;
        ll ans = LLONG_MAX;
        ll l = k, r = term;
        while (l <= r)
        {
            ll mid = l + (r - l) / 2;

            ll sum1 = (mid * (mid + 1)) / 2 - x;
            ll sum2 = sum_of_whole_array - sum1;

            ans = min(ans, abs(sum1 - sum2));

            if (sum1 < sum2)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        pr ans nl;
    }
    return 0;
}

// Arundhoti Kar@
// From PUST