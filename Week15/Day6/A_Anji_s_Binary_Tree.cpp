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
const int maxN = 3e5 + 9;
vector<int> g[maxN], operations(maxN);
string s;
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
void dfs(int u)
{
    if (g[u][0] != 0)
    {
        int v = g[u][0];
        if (s[u - 1] != 'L')
        {
            operations[v] = operations[u] + 1;
        }
        else
        {
            operations[v] = operations[u];
        }
        dfs(v);
    }
    if (g[u][1] != 0)
    {
        int v = g[u][1];
        if (s[u - 1] != 'R')
        {
            operations[v] = operations[u] + 1;
        }
        else
        {
            operations[v] = operations[u];
        }
        dfs(v);
    }
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
        for (int i = 0; i <= n; i++)
        {
            g[i].clear();
            operations[i] = 0;
        }

        cin >> s;
        for (int i = 1; i <= n; i++)
        {
            int l, r;
            in l >> r;
            g[i].push_back(l);
            g[i].push_back(r);
        }

        dfs(1);
        int ans = INT_MAX;
        for (int i = 1; i <= n; i++)
        {
            if (g[i][0] == 0 && g[i][1] == 0)
            {
                ans = min(ans, operations[i]);
            }
        }

        pr ans << '\n';
    }
    return 0;
}

// Arundhoti Kar@
// From PUST