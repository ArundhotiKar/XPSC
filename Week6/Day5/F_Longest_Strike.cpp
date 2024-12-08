#include <bits/stdc++.h>
#define ll long long
#define in cin >>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout <<
#define nl << endl;
using namespace std;
void solve()
{

    int n, k;
    in n >> k;
    vector<ll> a(n);
    map<ll, int> freq;
    for (int i = 0; i < n; i++)
    {
        in a[i];
        freq[a[i]]++;
    }

    vector<ll> valid;
    for (auto i : freq)
    {
        if (i.second >= k)
            valid.push_back(i.first);
    }

    if (valid.empty()) {
        pr -1 nl;
        return;
    }
    if (valid.size() == 1)
    {
        cout << valid[0] << " " << valid[0] << endl;
        return;
    }

    srt(valid);

    ll max_len = 0, l = -1, r = -1;
    ll start = valid[0], prev = valid[0];

    for (int i = 1; i < valid.size(); i++)
    {
        if (valid[i] == prev + 1)
        {
            prev = valid[i];
        }
        else
        {
            if (prev - start >= max_len)
            {
                max_len = prev - start;
                l = start;
                r = prev;
            }
            start = valid[i];
            prev = valid[i];
        }
    }

    if (prev - start >= max_len)
    {
        l = start;
        r = prev;
    }

    if (l == -1)
    {
        pr - 1 nl;
    }
    else
    {
        pr l << " " << r << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    in t;
    while (t--)
    {
        solve();
    }
    return 0;
}

// Arundhoti Kar@
// From PUST
