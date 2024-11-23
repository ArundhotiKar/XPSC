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
        cin >> n;
        int m = (n * n - n) / 2;
        vector<ll> a(n), b(m);
        for (int i = 0; i < m; i++)
            in b[i];
        srt(b);
        int x = 1, ind = 0;
        int fromBtoA = n - x;
        while (n - x > 0)
        {
            a[ind++] = b[fromBtoA - 1];
            x++;
            fromBtoA += n - x;
        }
        a[n - 1] = 1000000000;
        for (int i = 0; i < n; i++)
        {
            pr a[i] << " ";
        }
        pr "\n";
    }
    return 0;
}

// Arundhoti Kar@
// From PUST