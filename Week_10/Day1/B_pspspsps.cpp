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
        int n;
        in n;
        string s;
        in s;
        int pi=-1,si=-1,idx=0;
        for( char ch : s)
        {
            if(ch=='p' && pi==-1)
            {
                pi=idx;
            }
            if(ch=='s')
               si=idx;

            idx++;
        }
        if(si==-1 || pi==-1)
        {
            pr "YES\n";
        }else if(si==0 || pi==n-1)
        {
            pr "YES\n";
        }else
        {
            pr "NO\n";
        }
        
    }
    return 0;
}

// Arundhoti Kar@
// From PUST
