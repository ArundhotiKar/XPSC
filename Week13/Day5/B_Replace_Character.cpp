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
        in n;
        string s;
        in s;
        map<char, int> m;
        for (int i = 0; i < n; i++)
        {
            m[s[i]]++;
        }
        char mxc, mnc;
        int mx = 0, mn = n;
        for (auto i : m)
        {
            if (mx < i.second)
            {
                mx = i.second;
                mxc = i.first;
            }
            if (mn > i.second)
            {
                mn = i.second;
                mnc = i.first;
            }
        }
        if (mxc == mnc && n > 1)
        {
            int i = 0;
            while (mxc == s[i])
            {
                i++;
            }
            if (i < n)
                s[i] = mxc;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (mnc == s[i])
                {
                    s[i] = mxc;
                    break;
                }
            }
        }

        pr s << "\n";
    }
    return 0;
}

// Arundhoti Kar@
// From PUST