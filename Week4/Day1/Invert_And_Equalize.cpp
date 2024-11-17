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
    int t;
    in t;
    while (t--)
    {
        int n;
        in n;
        string s;
        in s;
        int cnt1 = 0, cnt2 = 0;
        bool f1 = false, f2 = false;
        int ans1 = 0, ans2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {

                if (f1)
                {
                    ans2++;
                    f1 = false;
                }
                f2 = true;
            }
            else
            {
                cnt2 = 1;
                if (f2)
                {
                    ans1++;
                    f2 = false;
                }
                f1 = true;
            }
        }
        if (f2)
        {
            ans1++;
            f2 = false;
        }
        if (f1)
        {
            ans2++;
            f1 = false;
        }

        pr min(ans1, ans2) nl;
    }
    return 0;
}

// Arundhoti Kar@
// From PUST