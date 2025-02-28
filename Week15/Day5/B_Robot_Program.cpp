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
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    in t;
    while (t--)
    {
        ll n, x, k;
        in n >> x >> k;
        string s;
        in s;
        bool f = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
                x--;
            else
                x++;
            k--;
            
            if (x == 0)
            {
                f = true;
                break;
            }
            if(k==0)
            {
                break;
            }
        }
        if (!f)
        {
            pr 0 nl;
            continue;
        }

        f = false;
        ll ans = 1, t = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
                x--;
            else
                x++;
            
            t++;
            if (x == 0)
            {
                f = true;
                break;
            }
        }
        if(f)
        {
            ans+=(k/t);
        }
        pr ans nl;
    }
    return 0;
}

// Arundhoti Kar@
// From PUST