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
        string s, t;
        in s;
        int n = s.size();
        int zero = 0, one = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                zero++;
            else
                one++;
        }
        if (one == zero)
        {
            pr 0 nl;
            continue;
        }
        t=s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                if (one > 0)
                {
                    t[i] = '1';
                    one--;
                }
            }
            else
            {
                if (zero > 0)
                {
                    t[i] = '0';
                    zero--;
                }
            }
        }
        int point = 0;
        for (int i = 0; i < t.size(); i++)
        {
            if (s[i] == t[i])
            {
                int j = i;
                while (j < n && t[j] == s[i])
                {
                    point++;
                    j++;
                }
                t.erase(i, j - 1);
                i=j-1;
            }
        }
        pr point nl;
    }
    return 0;
}

// Arundhoti Kar@
// From PUST