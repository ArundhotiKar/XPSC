#include <bits/stdc++.h>
#define ll long long
#define in cin >>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout <<
#define nl << endl;
using namespace std;
int mxBit=30;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    in t;
    while (t--)
    {
        ll n, k;
        in n >> k;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            in v[i];
        }
        vector<ll>bit(mxBit+1);
        for(int j=0; j<n; j++)
        {
            for(int i=mxBit; i>=0; i--)
            {
                if((v[j] >> i) & 1)
                {
                    bit[i]++;
                }
            }
        } 
        ll ans=0;
        for(int i=mxBit; i>=0; i--)
        {
            if(bit[i]==n)
            {
               ans+=(1LL << i);
            }else
            {
                int need=n-bit[i];
                if(need<=k)
                {
                    ans+=(1LL << i);
                    k-=need;
                }
            }
        }
        pr ans nl;
        
    }
    return 0;
}

// Arundhoti Kar@
// From PUST