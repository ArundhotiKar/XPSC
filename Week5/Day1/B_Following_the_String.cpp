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
        for (int i = 0; i < n; i++)
        {
            in v[i];
        }
        
        map<char,int>str;
        vector<char>ch;
        for(int i=0; i<26; i++)
        {
            ch.push_back(i+'a');
        }
        string ss="";
        int j=0;
        for (int i = 0; i < n; i++)
        {
            if(v[i]==0)
            {
                ss+=ch[j];
                str[ch[j]]++;
                j++;
            }else
            {
                for(auto c : str)
                {
                    if(c.second==v[i])
                    {
                        ss+=c.first;
                        str[c.first]++;
                        break;
                    }
                }
            }

        }
        pr ss nl
    }
    return 0;
}

// Arundhoti Kar@
// From PUST