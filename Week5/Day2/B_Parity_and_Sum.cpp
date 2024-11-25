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
        int n;
        in n;
        priority_queue<ll> pq;
        vector<ll> even;
        for (int i = 0; i < n; i++)
        {
            ll a;
            in a;
            if (a % 2 != 0)
            {
                pq.push(a);
            }
            else
            {
                even.push_back(a);
            }
        }
        if (pq.size() == n || even.size() == n)
        {
            pr "0\n";
            continue;
        }
        srt(even);
        ll ans = 0;
        int i = 0;
        ll max_ans=0;
        if(pq.top()<even[even.size()-1])
        {
            max_ans+=(even.size()+1);
        }else
        {
            max_ans+=even.size();
        }
        while (i < even.size())
        {
            ll tp = pq.top();
            if (tp > even[i])
            {
                pq.push(tp + even[i]);
                ans++;
            }
            else
            {
                pq.push(tp + even[i]);
                ans+=2;
            }
            i++;
        }
        pr min(ans,max_ans) nl;
    }
    return 0;
}

// Arundhoti Kar@
// From PUST