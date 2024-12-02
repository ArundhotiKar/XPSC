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
    cin >> t;
    while (t--)
    {
        int n, m;
        in n >> m;
        if (n < m)
        {
            pr "No\n";
        }
        else if (n == m)
        {
            pr "Yes\n";
        }
        else if (n % 2 == 0 && m % 2 == 0)
        {
            pr "Yes\n";
        }
        else if (n % 2 != 0 && m % 2 != 0)
        {
            pr "Yes\n";
        }
        else
        {
            pr "No\n";
        }
    }
    return 0;
}

// Arundhoti Kar@
// From PUST