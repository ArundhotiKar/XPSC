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
        int n, s;
        in n >> s;
        vector<int> v(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            in v[i];
            sum += v[i];
        }
        if (sum < s)
        {
            pr "-1\n";
            continue;
        }

        int l = 0, r = 0, Max_len = 0;
        // 1st find maximum length with sum s.. Then ans= n- max_length 
        sum = 0;
        while (r < n)
        {
            sum += v[r];
            if (sum <= s)
            {
                Max_len = max(Max_len, r - l + 1);
            }
            else
            {
                while (sum > s)
                {
                    sum -= v[l];
                    l++;
                }
            }
            r++;
        }
        int ans = n - Max_len;
        pr ans nl;
    }
    return 0;
}

// Arundhoti Kar@
// From PUST