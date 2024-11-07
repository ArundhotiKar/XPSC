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
        map<ll, int> count;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {

            in a[i];
            count[a[i]]++;
        }
        srt(a);
        int ans=0;
        
        for(int i=0; i<n; i++)
        {
            ll x=a[i];
            if(count[a[i]]>0)
            {
                ans++;
                while(count[x]>0)
                {
                    count[x]--;
                    x++;
                }
            }
        }
        pr ans nl;
    }
    return 0;
}

// Arundhoti Kar@
// From PUST