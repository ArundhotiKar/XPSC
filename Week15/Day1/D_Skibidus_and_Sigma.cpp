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
ll calculate_score(const vector<vector<ll>> arrays)
{
    ll score = 0, current_sum = 0;
    for ( auto arr : arrays)
    {
        for (ll val : arr)
        {
            current_sum += val;
            score += current_sum;
        }
    }
    return score;
}
bool compare(int i, int j, const vector<ll> &sums)
{
    return sums[i] > sums[j];
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
        in n >> m;

        vector<vector<ll>> arrays(n);
        vector<pair<ll, ll>> sums(n);

        for (int i = 0; i < n; ++i)
        {
            arrays[i].resize(m);
            long long sum = 0;
            for (int j = 0; j < m; ++j)
            {
                in arrays[i][j];
                sum += arrays[i][j];
            }
            sums[i] = {sum, i};
        }
        srt(sums);
        reverse(sums.begin(), sums.end());
        vector<vector<ll>> sorted_arrays;
        for (auto i : sums)
        {
            sorted_arrays.push_back(arrays[i.second]);
        }
        pr calculate_score(sorted_arrays) << '\n';
    }
    return 0;
}

// Arundhoti Kar@
// From PUST