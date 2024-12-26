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
const int maxValue=1000;
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
        int n;
        in n;
        vector<int> a(n);
        vector<int>idx(maxValue+1, -1);
        for (int i = 0; i < n; i++)
        {
            in a[i];
            idx[a[i]]=i+1;
        }
        int ans=-1;
        for(int i=0; i<=maxValue; i++)
        {
            for(int j=0; j<=maxValue; j++)
            {
              if((__gcd(i,j)==1) && idx[i]!=-1 && idx[j]!=-1)
              {
                ans=max(ans, idx[i]+idx[j]);
              }
            }
        }
        pr ans nl;
    }
    return 0;
}

// Arundhoti Kar@
// From PUST