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
        int n, c;
        string s;
        in n >> c >> s;
        vector<int> a(5, 0);
        for (int i = 0; i < n; i++)
        {
            a[s[i] - 'A']++;
        }
        sort(a.begin(), a.end());
        ll ans = 0, sum = 0, last = 0,d=0;
        for (int i = 0; i < 5; i++)
        {
            d+=a[i];
            sum = (d * (d + 1)) / 2;
            if (sum - last <= c)
            {
                ans += (sum - last);
            }
            else
            {
                ans += c;
            }
            last = sum;
        }
        pr ans nl;
    }
    return 0;
}

// Arundhoti Kar@
// From PUST