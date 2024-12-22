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
        for(int i=0; i<n; i++)
        in a[i];
        ll G1=0;
        for(int i=0; i<n; i+=2)
        {
            G1=__gcd(G1,a[i]);
        }
        bool f=true;
        for(int i=1; i<n; i+=2)
        {
            if(a[i]%G1==0)
            {
                f=false;
                break;
            }
        }
        if(f)
        {
            pr G1 nl;
            continue;
        }
        ll G2=0;
        for(int i=1; i<n; i+=2)
        {
            G2=__gcd(G2,a[i]);
        }
         f=true;
        for(int i=0; i<n; i+=2)
        {
            if(a[i]%G2==0)
            {
                f=false;
                break;
            }
        }
        if(f)
        {
            pr G2 nl;
            
        }else
        {
            pr 0 nl;
        }

    }
    return 0;
}

// Arundhoti Kar@
// From PUST