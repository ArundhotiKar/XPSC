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
        ll n;
        in n ;
        for(int i=1; i<=n; i+=2)
        {
            if(n%i==0)
            {
                ll a=n/i;
                ll b=a^i;
                if(((a|b)*(a^b))==n)
                {
                    pr a<<" "<<b nl;
                    break;
                }
            }
        }
    }
    return 0;
}

// Arundhoti Kar@
// From PUST