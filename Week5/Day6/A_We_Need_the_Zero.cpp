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
    int t;
    in t;
    while (t--)
    {
        int n;
        in n;
        vector<ll> v(n), b(n);
        ll x = 0, y = 0;
        map<ll, ll> m;
        for (int i = 0; i < n; i++)
        {
            in v[i];
            x^=v[i];
        }

        for (int i = 0; i < n; i++)
        {
            b[i] = v[i] ^ x;
        }
        for (int i = 0; i < n; i++)
        {
            y ^= b[i];
        }
        if (y == 0)
        {
            pr x nl;
        }
        else
        {
            pr "-1\n";
        }
    }
    return 0;
}

// Arundhoti Kar@
// From PUST
