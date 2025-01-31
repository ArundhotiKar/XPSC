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
        string s;
        in s;
        int n = s.size();
        bool ok=false;
        if(s[0]=='B'|| s[n-1]=='B')
        ok=true;
        for(int i=0; i<n-1; i++)
        {
            if(s[i]=='B'&& s[i+1]=='B')
            {
                ok=true;
                break;
            }
        }
        if(ok)
        {
            ll ans=0;
            for(int i=0; i<n; i++)
            {
                if(s[i]=='A')
                {
                    ans++;
                }
            }
            pr ans nl;
            continue;
        }
        int cnt=0;
        ll ans=0;
        vtr a;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='A')
            {
                cnt++;
            }else
            {
               a.push_back(cnt);
               cnt=0;
            }
        }
        a.push_back(cnt);
        srt(a);
        for(int i=a.size()-1; i>0; i--)
        {
            ans+=a[i];
        }
        pr ans nl;
    }
    return 0;
}

// Arundhoti Kar@
// From PUST