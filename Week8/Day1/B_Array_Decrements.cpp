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
        vector<ll> a(n), b(n);
        bool f = true;
        for (int i = 0; i < n; i++)
        {
            in a[i];
        }
        for(int i=0; i<n; i++)
        {
            in b[i];
        }
        ll z = 0;
        set<ll> s;
        for (int i = 0; i < n; i++)
        {
            
            if (b[i] > a[i])
            {
                f = false;
                break;
            }
            if (b[i] == 0)
            {
                z = max(z, a[i]);
            }
            else
            {
                s.insert((a[i] - b[i]));
            }
        }
        if (!f)
        {
            pr "NO\n";
            continue;
        }
        if (s.size() > 1)
        {
            cout << "NO\n";
        }
        else if (!s.empty() && *s.begin() < z)
        {
            pr "NO\n";
        }
        else
        {
            pr "YES\n";
        }
    }
    return 0;
}

// Arundhoti Kar@
// From PUST