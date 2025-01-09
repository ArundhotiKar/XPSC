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
    
        ll n, k;
        
        in n >> k;
        vtr a(n);
        for (int i = 0; i < n; i++)
        {
            in a[i];
        }
        srt(a);
        ll i = n / 2, sm = 1;
        ll ans = 0;
        while (k > 0)
        {

            while (i + 1 < n && a[i] == a[i + 1])
            {
                sm++;
                i++;
            }
            if (i + 1 == n)
            {
                ans = a[i] + (k / sm);
                break;
            }
            else
            {
                ll tem = a[i + 1] - a[i];
                if (k >= (tem * sm))
                {
                    ans = a[i + 1];
                    k -= (tem * sm);
                    i++;
                    sm++;
                }else
                {
                    ans=a[i]+ (k/sm);
                    break;
                }
            }
        }
        pr ans nl;
    
    return 0;
}

// Arundhoti Kar@
// From PUST