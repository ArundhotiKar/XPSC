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
        int n, k;
        in n >> k;
        string s;
        in s;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                v.push_back(i + 1);
        }
        ll cnt = 0;
        if (v.size() == 0)
        {
            for (int i = 1; i <= n; i += (k + 1))
                cnt++;
        }
        else
        {
            for (int i = 1; i <= (v[0] - (k + 1)); i += (k + 1))
            {
                cnt++;
            }

            for (int i = (v[v.size() - 1] + (k + 1)); i <= n; i += (k + 1))
            {
                cnt++;
            }

            for (int i = 0; i < v.size()-1; i++)
            {
                int l = v[i];
                int r = v[i + 1];
                for (int j = l + (k + 1); j <= r - (k + 1); j+=(k+1))
                {
                    cnt++;
                }
            }
        }

        pr cnt nl;
    }

    return 0;
}

// Arundhoti Kar@
// From PUST