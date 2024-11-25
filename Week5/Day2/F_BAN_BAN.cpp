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
        vector<int> v;
        int j = 1, k = (3 * n);
        if (n % 2 != 0)
        {

            pr n / 2 + 1 nl;
            n += 1;
        }
        else
        {
            pr n / 2 nl;
        }

        for (int i = 1; i <= n / 2; i++)
        {
            pr j << " " << k nl;
            j += 3;
            k -= 3;
        }
    }
    return 0;
}

// Arundhoti Kar@
// From PUST