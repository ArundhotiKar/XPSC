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
        vector<int> v(n);
        int x=0;
        for(int i=0; i<n; i++)
        {
            in v[i];
            x=(x^v[i]);
        }
        
        int tem=x;
        for(int i=n-1; i>=0; i--)
        {
            int currXor=x^(v[i]);
            tem=min(currXor,tem);
        }
        pr tem nl;
        
    }
    return 0;
}

// Arundhoti Kar@
// From PUST