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
        ll l=1,r=n*n;
        ll arr[n][n];
        for(int i=0; i<n; i++)
        {
            if(i%2==0)
            {
                for(int j=0; j<n; j++)
                {
                   if(j%2==0)
                   {
                      arr[i][j]=l;
                      l++;
                   }else
                   {
                      arr[i][j]=r;
                      r--;
                   }
                }
            }else
            {
                for(int j=n-1; j>=0; j--)
                {
                   if(j%2!=0)
                   {
                      arr[i][j]=l;
                      l++;
                   }else
                   {
                      arr[i][j]=r;
                      r--;
                   }
                }
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                pr arr[i][j]<<" ";
            }
            pr "\n";
        }
    }
    return 0;
}

// Arundhoti Kar@
// From PUST