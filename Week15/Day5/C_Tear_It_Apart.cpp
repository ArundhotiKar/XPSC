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
        string s;
        cin >> s;
        ll n = (ll)s.size(), c = 0, mini = INT_MAX, maxi;
        for (char i = 'a'; i <= 'z'; i++)
        {
            c = 0, maxi = 0;
            for (ll j = 0; j < n; j++)
            {
                if (s[j] != i)
                {
                    c++;
                    if (c > maxi)
                        maxi = c;
                }
                else
                {
                    c = 0;
                }
            }

            if (maxi < mini)
            {
                mini = maxi;
            }
        }

        if (mini == 0)
            pr 0 << endl;
        else
        {
            c = 0;
            while (mini != 1)
            {
                mini /= 2;
                c++;
            }
            pr c + mini << endl;
        }
    }
    return 0;
}

// Arundhoti Kar@
// From PUST