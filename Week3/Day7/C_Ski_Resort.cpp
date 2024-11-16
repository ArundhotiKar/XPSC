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
        int n, k, q;
        in n >> k >> q;
        vector<ll> v(n), a, sub;
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            in v[i];
            if (q >= v[i])
            {
                a.push_back(v[i]);
                c++;
            }
            else if (c != 0)
            {
                sub.push_back(c);
                c = 0;
            }
        }
        if (c != 0)
        {
            sub.push_back(c);
            c = 0;
        }
        if (k > a.size())
        {
            cout << "0\n";
        }
        else
        {
            ll cnt = 0, tem=0;
            for (int i = 0; i < sub.size(); i++)
            {
                if (sub[i] >= k)
                {
                    tem=1;
                    for (int j = k; j <= sub[i]; j++)
                    {
                        cnt += tem;
                        tem++;
                    }
                }
            }
            pr cnt nl;
        }
    }
    return 0;
}

// Arundhoti Kar@
// From PUST