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
        int n, q;
        in n >> q;
        vector<ll> a(n), b(q);
        for (int i = 0; i < n; i++)
        {
            in a[i];
        }
        vector<int>s;
        map<int,int>m;
        for (int i = 0; i < q; i++)
        {
            in b[i];
            if(m[b[i]]<=0)
            {
                s.push_back(b[i]);
                m[b[i]]++;
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int j : s)
            {
                ll p=(1LL<<j);
                if(a[i]%p==0)
                {
                    ll pp=1LL<<(j-1);
                    a[i]+=pp;
                }
            }
        }
        for(int i=0; i<n; i++)
        pr a[i] <<" ";

        pr "\n";
        
    }
    return 0;
}

// Arundhoti Kar@
// From PUST