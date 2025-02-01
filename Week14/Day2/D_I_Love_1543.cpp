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
    int t;
    in t;
    while (t--)
    {
        int n, m;
        in n >> m;
        vector<string>mat(n);
        for (int i = 0; i < n; i++)
        {
            in mat[i];
        }
        vector<string> a;
        for (int i = 0; i<min(n/2, m/2); i++)
        {
            string temp;
            for (int j = i; j < m - i; j++)
                temp.push_back(mat[i][j]);
            for (int j = i + 1; j < n - i; j++)
                temp.push_back(mat[j][m - 1 - i]);
            for (int j = m - 2 - i; j >= i; j--)
                temp.push_back(mat[n - i - 1][j]);
            for (int j = n - 2 - i; j > i; j--)
                temp.push_back(mat[j][i]);
            
            temp.push_back(temp[0]);
            temp.push_back(temp[1]);
            temp.push_back(temp[2]);
            a.push_back(temp);
        }
        ll ans=0;
        for (string s : a)
        {
           int sz=s.size();
            for(int i=0; i<sz-3; i++)
            {
                if(s.substr(i,4)=="1543")
                {
                    ans++;
                }
            }
        }
        pr ans nl;
        
    }
    return 0;
}

// Arundhoti Kar@
// From PUST