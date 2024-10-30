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

    int n;
    cin >> n;
    map<string, string> ans, has;
    for (int i = 1; i <= n; i++)
    {
        string a, b;
        cin >> a >> b;
        if (has.find(a) != has.end())
        {
            string s = has[a];
            ans[s] = b;
            has.erase(a);
            has[b] = s;
        }
        else
        {
            ans[a] = b;
            has[b] = a;
        }
    }

    cout << ans.size() << '\n';
    for (auto it : ans)
    {
        cout << it.first << " " << it.second << '\n';
    }
    return 0;
}

// Arundhoti Kar@
// From PUST