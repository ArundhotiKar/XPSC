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

    int n, m;
    in n >> m;
    vector<ll> v1(n);
    vector<ll> v2(m);
    for (int i = 0; i < n; i++)
    {
        in v1[i];
    }

    for (int i = 0; i < m; i++)
    {
        in v2[i];
    }
    ll l = 0, r = 0;
    ll ans = 0;
    while (l < n && r < m)
    {
        ll curr = v1[l], cnt1 = 0, cnt2 = 0;
        while (l < n && v1[l] == curr)
        {
            cnt1++, 
            l++;
        }
        while (r < m && curr > v2[r])
        {
            r++;
        }
        while (r < m && v2[r] == curr)
        {
            cnt2++, 
            r++;
        }
        ans += ( cnt1 * cnt2);
    }

    cout << ans << '\n';
    return 0;
}

// Arundhoti Kar@
// From PUST