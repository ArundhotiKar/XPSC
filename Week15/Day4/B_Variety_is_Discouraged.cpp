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
        vtr a(n);
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            in a[i];
            m[a[i]]++;
        }

        int r = -1, l = -1, maxLen = 0;
        int i = 0;
        while (i < n)
        {
            if (m[a[i]] < 2)
            {
                int j = i;
                while (j < n && m[a[j]] < 2)
                {
                    j++;
                }
                if (j - i > maxLen)
                {
                    maxLen = j - i;
                    l = i + 1;
                    r = j;
                }
                i = j;
            }
            else
            {
                i++;
            }
        }

        if (r != -1)
        {
            pr l << " " << r nl;
        }
        else
        {
            pr 0 nl;
        }
    }
    return 0;
}

// Arundhoti Kar@
// From PUST