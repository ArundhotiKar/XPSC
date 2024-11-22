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
        ll k;
        in n >> k;

        vector<ll> a(n), h(n);
        for (int i = 0; i < n; i++)
            in a[i];

        for (int i = 0; i < n; i++)
            in h[i];
            
        int l = 0, r = 1;
        ll sum = a[0];
        int ans = 0;
        if(sum <= k) ans = 1;
        while (r < n)
        {
            if (h[r - 1] % h[r] == 0)
            {
                sum += a[r];
            }
            else
            {
                l = r;
                sum = a[r];
            }

            while (sum > k)
            {
                sum -= a[l];
                l++;
            }
            ans = max(ans, r - l + 1);

            r++;
        }
        pr ans nl;
    }
    return 0;
}

// Arundhoti Kar@
// From PUST
