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
    int t;
    in t;
    while (t--)
    {
        int n;
        in n;
        priority_queue<ll> pq;
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            ll a;
            in a;
            if (a != 0)
            {
                pq.push(a);
            }
            else
            {
                if (!pq.empty())
                {
                    ans += pq.top();
                    pq.pop();
                }
            }
        }
        pr ans nl;
    }
    return 0;
}

// Arundhoti Kar@
// From PUST