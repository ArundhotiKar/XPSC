#include <bits/stdc++.h>
#define ll long long
#define in cin >>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout <<
#define nl << endl;
using namespace std;
int search(string pat, string txt)
{
    int n = txt.length();
    int k = pat.length();
    int ans = 0;
    vector<int> hashPat(26, 0);
    for (int i = 0; i < k; i++)
    {
        hashPat[pat[i] - 'a']++;
    }

    vector<int> hashTxt(26, 0);

    int i = 0, j = 0;

    while (j < n)
    {

        hashTxt[txt[j] - 'a']++;

        if (j - i + 1 == k)
        {
            if (hashTxt == hashPat)
                ans++;

            hashTxt[txt[i] - 'a']--;
            i++;
        }
        j++;
    }
    return ans;
}
int main()
{

   string s1,s2;
   in s1>> s2;
   cout<<search(s1,s2);
    return 0;
}

// Arundhoti Kar@
// From PUST