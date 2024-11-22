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
        string s;
        in v[0];
        vector<ll> preSum(n);
        preSum[0] = v[0];
        for (int i = 1; i < n; i++)
        {
            in v[i];
            preSum[i] = preSum[i - 1] + v[i];
        }

        in s;

        vector<int> indx_for_L, indx_for_r;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
                indx_for_L.push_back(i);
            else
                indx_for_r.push_back(i);
        }

        int i = 0, j = indx_for_r.size() - 1;
        ll sum = 0;
        
        while (indx_for_L.size() > i && j >= 0)
        {
            if (indx_for_L[i] < indx_for_r[j])
            {
                ll s = 0;
                if (indx_for_L[i] == 0)
                {
                    s = preSum[indx_for_r[j]];
                }
                else
                {
                    s = preSum[indx_for_r[j]] - preSum[indx_for_L[i] - 1];
                }
                sum += s;
            }
            else
            {
                break;
            }
            i++;
            j--;
        }
        pr sum nl;
    }
    return 0;
}

// Arundhoti Kar@
// From PUST