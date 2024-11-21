#include <bits/stdc++.h>
#define ll long long
#define in cin >>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout <<
#define nl << endl;
using namespace std;
int longestKSubstr(string s, int k)
{
    int len = s.size();
    int l = 0, r = 0, ans = -1;
    map<char, int> mp;
    while (r < len)
    {
        mp[s[r]]++;
        if (mp.size() == k)
        {
            ans = max(ans, r - l + 1);
        }
        else if (mp.size() > k)
        {
            while (mp.size() > k)
            {
                mp[s[l]]--;
                if (mp[s[l]] == 0)
                {
                    mp.erase(s[l]);
                }
                l++;
            }
            if (mp.size() == k)
                ans = max(ans, r - l + 1);
        }
        r++;
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    in s;
    int k;
    in k;

    pr longestKSubstr(s, k) nl;
    return 0;
}

// Arundhoti Kar@
// From PUST