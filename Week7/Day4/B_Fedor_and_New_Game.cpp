#include <bits/stdc++.h>
#define ll long long
#define in cin >>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout <<
#define nl << endl;
using namespace std;
int countOnBits(int v)
{
    int cnt = 0;
    for (int i = 0; i <= 20 - 1; i++)
    {
        if (v & (1LL << i))
        {
            cnt++;
        }
    }
    return cnt;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, m, k;
    in n >> m >> k;
    int fnd_cnt = 0;
    vector<ll> a(m + 1);
    for (int i = 0; i <= m; i++)
    {
        in a[i];
    }
    ll fedor = a[m];

    for (int i = 0; i < m; i++)
    {
        if(__builtin_popcount(a[i] ^ fedor)<=k)
        {
            fnd_cnt++;
        }
    }
    pr fnd_cnt nl;

    return 0;
}

// Arundhoti Kar@
// From PUST
