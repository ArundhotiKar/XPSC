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
        int n, m;
        in n;
        in m;
        vector<vector<int>> arr(n, vector<int>(m));
        map<int, int> ans;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                in arr[i][j];
                ans[arr[i][j]] = 1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < m; j++)
            {
                if (arr[i][j - 1] == arr[i][j])
                    ans[arr[i][j]] = 2;
            }
        }
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i - 1][j] == arr[i][j])
                    ans[arr[i][j]] = 2;
            }
        }
        int Fans = 0, mxFreq = 0;
        for (auto it : ans)
        {
            Fans += it.second;
            mxFreq = max(mxFreq, it.second);
        }
        pr Fans - mxFreq nl;
    }
    return 0;
}

// Arundhoti Kar@
// From PUST