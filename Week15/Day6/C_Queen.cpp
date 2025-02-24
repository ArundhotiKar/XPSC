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
    int n, root;
    in n;
    vector<int> g[n + 1], bad(n + 1), a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        int p, c;
        in p >> c;
        int u = p, v = i;
        if (u != -1)
        {
            g[u].push_back(v);
        }
        else
        {
            root = i;
        }
        if (c == 1)
        {
            bad[u]++;
            a[v] = 1;
        }
    }

    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        if (root == i)
        {
            continue;
        }
        if ((g[i].size() == bad[i] && a[i] == 1))
        {
            ans.push_back(i);
        }
    }

    if (ans.empty())
    {
        pr -1 << '\n';
    }
    else
    {
        for (int i = 0; i < ans.size(); i++)
        {
            pr ans[i] << " ";
        }
        pr '\n';
    }
    return 0;
}

// Arundhoti Kar@
// From PUST