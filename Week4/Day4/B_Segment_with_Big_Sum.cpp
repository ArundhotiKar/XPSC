#include <bits/stdc++.h>
#define ll long long
#define in cin >>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout <<
#define nl << endl;
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    in n;
    vector<ll> v(n);
    ll s;
    in s;
    for (int i = 0; i < n; i++)
        in v[i];

    ll ans = LONG_LONG_MAX, sum = 0;
    ll l = 0, r = 0;
    while (r < n)
    {
        sum += v[r];
        if (sum >= s)
        {
            while (sum >= s)
            {
                ans = min(ans, r - l + 1);
                sum-=v[l];
                l++;
            }
        }
        r++;
    }
    if(ans==LONG_LONG_MAX)
    {
        pr "-1\n";
        return 0;
    }
    pr ans nl;
    return 0;
}

// Arundhoti Kar@
// From PUST