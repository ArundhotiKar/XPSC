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
    ll s;

    in n >> s;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        in v[i];
    int l = 0, r = 0;
    ll seg = 0, sum = 0;
    while (r < n)
    {
        sum += v[r];
        if (sum >= s)
        {
            ll cnt_value_after_r = n - (r + 1);
            while (l <= r && sum >= s)
            {
                seg += (cnt_value_after_r + 1);
                sum -= v[l];
                l++;
            }
        }
        r++;
    }
    pr seg nl;
    return 0;
}

// Arundhoti Kar@
// From PUST