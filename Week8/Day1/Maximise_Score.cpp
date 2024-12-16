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
        vector<int> v(n),a(n);
        for (int i = 0; i < n; i++)
        {
            in v[i];
        }
        a[0]=abs(v[0]-v[1]);
        for(int i=1; i<n-1; i++)
        {
            int b=v[i]-v[i+1];
            int c=v[i]-v[i-1];
            a[i]=max(abs(b),abs(c));
        }
        a[n-1]=abs(v[n-1]-v[n-2]);
        srt(a);
        pr a[0] nl;
        

    }
    return 0;
}

// Arundhoti Kar@
// From PUST