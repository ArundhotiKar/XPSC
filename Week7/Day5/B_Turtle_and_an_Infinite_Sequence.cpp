#include<bits/stdc++.h>
#define ll long long
#define in cin>>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout<<
#define nl <<endl;
using namespace std;

ll solve(ll l, ll r)
{
    int tem = 0;
    for (int i = 32; i >= 0; i--)
    {
        ll t1 = l & (1LL << i);
        ll t2 = r & (1LL << i);
        if (t1 != t2)
        {
        
            tem = (1LL << i) ;
            tem|=tem-1;
            break;
        }
    }
    
    return (r | tem);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    in t;
    while (t--)
    {
        ll n, m;
        in n >> m;
        ll ans = solve(max(0LL, n - m), n + m);
        pr ans nl;
    }
    return 0;
}
