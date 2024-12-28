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
    ll ans = 1;
    while (y)
    {
        if (y & 1)
        {
            ans = (ans * x) % MOD;
        }
        x = (x * x) % MOD;
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
        int x, y, k;
        in x >> y >> k;
        while (x>1)
        {
            int rem = x % y;
            int a = y - rem;
            int delta = min(k, a);
            k -= delta;
            x += delta;
            while (x % y == 0)
            {
                x /= y;
            }
            if(k<=0)
            break;
        }
        if(k>0)
        {
            x+=(k%(y-1));
            while (x % y == 0)
            {
                x /= y;
            }
        }
        pr x nl;
    }
    return 0;
}

// Arundhoti Kar@
// From PUST
