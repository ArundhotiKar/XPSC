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
    int n;
    ll x;
    in n >> x;
    vector<pair<ll,int>> a(n);
    for (int i = 0; i < n; i++)
    {
        in a[i].first;
        a[i].second = i + 1;
    }
    srt(a);
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i+1; j < n - 1; j++)
        {
            ll rem = x - (a[i].first + a[j].first);
            int l = j + 1, r = n - 1;

            while (l <= r)
            {
                int mid = (l + r) / 2;
                if (a[mid].first == rem)
                {
                    pr a[i].second << " " << a[j].second << " " << a[mid].second << "\n";
                    return 0;
                }
                else if (a[mid].first < rem)
                {
                    l = mid + 1;
                }
                else
                {
                    r = mid - 1;
                }
            }
        }
    }
    cout << "IMPOSSIBLE\n";
    return 0;
}

// Arundhoti Kar@
// From PUST