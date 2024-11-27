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
    cin >> t;
    while (t--)
    {
        int n;
        in n;
        string s;
        in s;
        vector<int> freq(26, 0);

        for (char a : s)
        {
            freq[a - 'a']++;
        }

        while (n != 0)
        {

            for (int i = 0; i < 26; i++)
            {
                if (freq[i] != 0)
                {
                    char ch=i+'a';
                    pr ch;
                    freq[i]--;
                    n--;
                }
            }
        }

        pr "\n";
    }
    return 0;
}

// Arundhoti Kar@
// From PUST