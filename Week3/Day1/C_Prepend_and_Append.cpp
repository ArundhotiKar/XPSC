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
        string s;
        in s;
        int i = 0, j = n - 1;
        int cnt = 0;
        while (i < j)
        {
            if (s[i] != s[j])
            {
                cnt++;
                i++;
                j--;
            }
            else
            {
                break;
            }
        }
        int ans=2*cnt;
       cout<<n-ans<<endl;
    }
    return 0;
}

// Arundhoti Kar@
// From PUST