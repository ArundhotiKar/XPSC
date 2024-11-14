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
        vector<vector<int>> v(n, vector<int>(n - 1));
        unordered_map<int, int> m;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                in v[i][j];
            }
        }

        for (int i = 1; i <= n; i++)
        {
            m[i] = -1;
        }

        int uniq = -1;
        for (int i = n-1; i >0; i--)
        {
            if (v[i][n - 2] != v[i - 1][n - 2])
            {
                if(i==1)
                {
                    uniq=0;
                }else
                {
                    if(v[i-1][n-2]!=v[i-2][n-2])
                    {
                        uniq=i-1;
                    }else
                    {
                        uniq=i;
                    }
                }
                break;
            }
        }

        if (uniq == -1)
        {
            uniq = 0; 
        }

        for (auto i : v[uniq])
        {
            cout << i << " ";
            m[i] = 1;
        }

        for (auto i : m)
        {
            if (i.second == -1)
            {
                cout << i.first;
                break;
            }
        }

        cout << endl;
    }
    return 0;
}

// Arundhoti Kar@
// From PUST
