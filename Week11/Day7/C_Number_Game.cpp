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
int n;
vtr a;
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
bool Ok(int k)
{
    multiset<int>s;
    for( int i: a)
    {
        s.insert(i);
    }
    int req=k;
    for(int i=0; i<k; i++)
    {
         if(s.empty())
          return false;
        auto it=s.upper_bound(req);
        if(it==s.begin())
          return false;

          it--;
          s.erase(it);
          if(!s.empty())
          {
             auto ii=s.begin();
             s.erase(ii);
          }
        req--;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    in t;
    while (t--)
    {

        in n;
        a.clear();
        for (int i = 0; i < n; i++)
        {
            int b;
            in b;
            a.push_back(b);
        }

        int l=0,r=n;
        int ans=0;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(Ok(mid))
            {
                ans=max(ans,mid);
                l=mid+1;
            }else
            {
                r=mid-1;
            }
        }
        pr ans nl;

    }
    return 0;
}

// Arundhoti Kar@
// From PUST