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
        string s = "";
        if (n %2!=0)
        {
            pr "NO\n";
        }
        else
        {
            pr "YES\n";
            int pairs = n / 2;
            for (int i = 0; i < pairs; i++)
            {
                if (i % 2 == 0)
                {
                    s += "AA";
                }
                else
                {
                    s += "BB";
                }
            }
            
            pr s nl;
        }
    }
    return 0;
}

// Arundhoti Kar@
// From PUST