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
        string a, b, c;
        in a >> b >> c;
        int ans = 0;

        for (int i = 0; i < n; i++)
        {

            if (a[i] != c[i] && b[i] != c[i])
            {
                ans = 1;
                break;
            }
        }
        if (ans == 1)
            pr "YES\n";
        else
            pr "NO\n";
    }
    return 0;
}

// Arundhoti Kar@
// From PUST