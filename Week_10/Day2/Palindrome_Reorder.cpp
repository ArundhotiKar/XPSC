#include <bits/stdc++.h>
#define ll long long
#define in cin >>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout <<
#define nl << endl;
using namespace std;
const ll MOD = 1e9 + 7;
ll power(ll x, ll y)
{
    ll ans = 1 % MOD;
    while (y)
    {
        if (y & 1)
        {
            ans = (1LL * ans % MOD * x % MOD) % MOD;
        }
        x = 1LL * x * x % MOD;
        y >>= 1;
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    in s;
    int n = s.size();
    map<char, int> cnt;
    for (int i = 0; i < n; i++)
    {
        cnt[s[i]]++;
    }
    int cnt_odd = 0;
    char odd_char;
    for (auto ch: cnt)
    {
        if (ch.second % 2 != 0)
          {
             cnt_odd++;
             odd_char=ch.first;
          }
    }
    if (cnt_odd > 1)
    {
        pr "NO SOLUTION\n";
    }
    else
    {
        deque<char>ans;
        if(cnt_odd==1)
        {
            ans.push_back(odd_char);
            cnt[odd_char]--;
        }
        for(auto i: cnt)
        {
            while(i.second>0)
            {
                ans.push_back(i.first);
                ans.push_front(i.first);
                i.second-=2;
            }
        }
        for(char c: ans)
        {
            pr c;
        }

    }
    return 0;
}

// Arundhoti Kar@
// From PUST