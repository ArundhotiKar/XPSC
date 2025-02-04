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
    stack<char> st;
    int cnt=0;
    for (int i = 0; i < s.size(); i++)
    {
        if (!st.empty() && st.top() == s[i]) 
        {
            st.pop();
            cnt++;
        } else {
            st.push(s[i]);
        }
        
    }
    if (cnt % 2 == 1)
        cout << "Yes\n";
    else
        cout << "No\n";
    
    return 0;
}

// Arundhoti Kar@
// From PUST