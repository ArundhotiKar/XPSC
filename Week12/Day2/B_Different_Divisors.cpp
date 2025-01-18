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
const int MAX_X = 1e6;
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
    vector<int> divisor_count(MAX_X + 1, 0);
    for (int i = 1; i <= MAX_X; i++)
    {
        for (int j = i; j <= MAX_X; j += i)
        {
            divisor_count[j]++;
        }
    }
    int t;
    in t;
    while (t--)
    {
        int d;
        in d;
        int cnt = 1;
        ll i = 1 + d, a = 0, b = 0;
        while (true)
        {
            while (divisor_count[i] != 2)
            {
                i++;
            }
            cnt++;
            if (cnt == 2)
                a = i;
            if (cnt == 3)
            {
                b = i;
                break;
            }
            i = i + d;
        }
        pr a*b nl;
    }
    return 0;
}

// Arundhoti Kar@
// From PUST