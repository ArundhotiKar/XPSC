#include <bits/stdc++.h>
#define ll long long
#define in cin >>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout <<
#define nl << endl;
using namespace std;
ll count_bit_on(ll v)
{
    ll cnt = 0;
    for(int i=0; i<64; i++)
    {
        if(v & (1LL << i))
        {
            cnt++;
        }
    }
    return cnt;
}
bool bit_on_off(ll n, int k)
{
    return (n & (1LL << k)) != 0;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    in t;
    while (t--)
    {
        ll n;
        in n;

        int cnt = count_bit_on(n);
        if (cnt == 1)
        {
            pr cnt nl;
            pr n nl;
            continue;
        }
        cnt++;
        pr cnt nl;
        deque<ll> dq;
        dq.push_front(n);

        for (int k = 0; k <64; k++)
        {
            if (bit_on_off(n, k))
            {
                dq.push_front(n & ~(1LL << k)); 
            }
        }

        for (ll i : dq)
        {
            pr i << " ";
        }
        pr "\n";
    }
    return 0;
}

// Arundhoti Kar@
// From PUST
