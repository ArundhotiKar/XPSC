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
        ll k;
        in n >> k;
        vector<int> v(n + 1);
        vector<bool> present(n + 1, false);
        for (int i = 0; i < n; i++)
        {
            in v[i];
            present[v[i]] = true;
        }
        for (int i = 0; i <= n; i++)
        {
            if (!present[i])
            {
                v[n] = i;
                break;
            }
        }
        int r = k % (n + 1);
        vector<int> rotated(n + 1);
        for(int i = 0; i <= n; i++) 
        {
            rotated[(i + k) % (n + 1)] = v[i];
        }
        for (int i = 0; i < n; i++)
        {
            pr rotated[i] << " ";
        }
        pr "\n";
    }
    return 0;
}

// Arundhoti Kar@
// From PUST