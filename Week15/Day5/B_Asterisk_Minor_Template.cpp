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
        int f = 0, i, j;
        string a, b;
        in a>>b;

        int n = a.size();
        int m = b.size();

        if (a[0] == b[0])
        {
           pr "YES\n";
           pr a[0] << "*\n";
            continue;
        }
        else if (a[n - 1] == b[m - 1])
        {
            pr "YES\n";
            pr "*" << a[n - 1] << "\n";
            continue;
        }

        for (i = 0; i < n - 1; i++)
        {
            for (j = 0; j < m - 1; j++)
            {
                if (a[i] == b[j] && a[i + 1] == b[j + 1])
                {
                    f = 1;
                    break;
                }
            }
            if (f == 1)
                break;
        }

        if (f == 1)
        {
            pr "YES\n";
            pr "*" << a[i] << a[i + 1] << "*\n";
        }
        else
        {
            pr "NO\n";
        }
    }
    return 0;
}

// Arundhoti Kar@
// From PUST