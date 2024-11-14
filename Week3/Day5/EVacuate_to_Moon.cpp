#include <bits/stdc++.h>
#define ll long long
#define in cin >>
#define srt(a) sort(a.begin(), a.end(),greater<int>());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout <<
#define nl << endl;
using namespace std;
int main()
{
    int t;
    in t;
    while (t--)
    {
        int n, m, h;
        in n >> m >> h;
        vector<ll> a(n), b(m);
        for (int i = 0; i < n; i++)
            in a[i];
        for (int i = 0; i < m; i++)
            in b[i];

        srt(a);
        srt(b);
        ll ans = 0;
        int k=min(n,m);
        for (int i=0; i<k; i++ )
        {
              ans+=min(a[i],(b[i]*h));
        }

        pr ans nl;
    }
    return 0;
}

// Arundhoti Kar@
// From PUST