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
    ll n, k;
    in n >> k;
    vector<ll> v;
    map<ll, int> m;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0 && m[i] <= 0)
        {
            v.push_back(i);
            m[i]++;
            if (m[n / i] <= 0)
            {
                v.push_back(n / i);
                m[n / i]++;
            }
        }
    }
    srt(v);
    if (v.size() < k)
    {
        pr - 1 nl;
    }
    else
    {
        pr v[k - 1] nl;
    }
    return 0;
}

// Arundhoti Kar@
// From PUST