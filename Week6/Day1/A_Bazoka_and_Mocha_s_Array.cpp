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

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        in a[i];

    vector<int> sorted_a = a;
    srt(sorted_a);
    if (a == sorted_a)
    {
        pr "Yes\n";
        return;
    }
    // Rotate check
    bool is_possible = false;
    for (int i = 0; i < n; i++)
    {
        rotate(a.begin(), a.begin() + 1, a.end());
        if (a == sorted_a)
        {
            is_possible = true;
            break;
        }
    }

    if (is_possible)
    {
        pr "Yes\n";
    }
    else
    {
        pr "No\n";
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