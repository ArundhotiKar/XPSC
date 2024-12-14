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
        vector<ll> a(n);
        map<int,int>bit;
        for (int i = 0; i < n; i++)
        {
            in a[i];
            int b=__lg(a[i]);
            bit[b]++;
        }
        int cnt = 0;
        vector<ll>p;
        p.push_back(0);
        p.push_back(0); // 1
        p.push_back(1);// 2
        for(int i=3; i<=n; i++)
        {
            p.push_back(p[i-1]+(i-1));
        }
        //Brute Force solution
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if ((a[i] & a[j]) >= (a[i] ^ a[j]))
                {
                    cnt++;
                }
            }
        }
        ll ans=0;
        for(auto i : bit)
        {
           ans+=p[i.second];
        }
        pr ans nl;
    }

    return 0;
}

// Arundhoti Kar@
// From PUST