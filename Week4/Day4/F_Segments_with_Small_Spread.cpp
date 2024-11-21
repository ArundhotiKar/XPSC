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
    ll k, ans = 0;
    in k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        in v[i];
    int l = 0, r = 0;
    multiset<ll> ml;
    while (r < n)
    {
        ml.insert(v[r]);
        ll mn = *ml.begin();
        ll mx = *ml.rbegin();
        if (mx - mn <= k)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (l <= r)
            {
                mn = *ml.begin();
                mx = *ml.rbegin();
                if (mx - mn <= k)
                    break;

                ml.erase(ml.find(v[l]));
                l++;
            }
            mn = *ml.begin();
            mx = *ml.rbegin();
            if (mx - mn <= k)
            {
                ans += (r - l + 1);
            }
        }
        r++;

    }
    pr ans nl;
    return 0;
}

// Arundhoti Kar@
// From PUST