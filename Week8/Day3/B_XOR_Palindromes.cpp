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
        string s;
        in s;
        int pair = 0, nonPair = 0, odd = 0;
        if (n % 2 != 0)
        {
            odd++;
        }
        int l = 0, r = n - 1;
        while (l < r)
        {
            if (s[l] == s[r])
                pair++;
            else
                nonPair++;

            l++;
            r--;
        }
        string ans = "";
        if (n / 2 == pair)
            ans += '1';
        else
            ans += '0';

        int sum = nonPair + 2 * pair + odd;
        for (int i = 1; i <= n; i++)
        {
            if (i < nonPair)
            {
                ans += '0';
            }
            else if (i > nonPair)
            {
                int tem = i - nonPair;
                int j = 2 * pair;
                if (tem % 2 == 0)
                {
                    if (tem <= j)
                        ans += '1';
                    else
                        ans += '0';
                }
                else
                {
                    if (odd == 1 && (tem - 1) <= j)
                        ans += '1';
                    else
                        ans += '0';
                }
            }else
            {
                ans += '1';
            }

        }
        pr ans nl;
    }
    return 0;
}

// Arundhoti Kar@
// From PUST