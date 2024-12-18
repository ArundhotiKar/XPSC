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
        string s;
        in s;
        string a = "Ramos", b = "Zlatan";
        int c = 0;
        stack<char>st;
        for (int i = 0; i < n; i++)
        {
           if(st.empty())
           {
              st.push(s[i]);
              continue;
           }
           char ch=st.top();
           if(ch!=s[i])
           {
              st.pop();
              c++;
           }else
           {
              st.push(s[i]);
           }
        }
        if(c%2==0)
        {
            pr a nl;
        }else
        {
            pr b nl;
        }
    }
    return 0;
}

// Arundhoti Kar@
// From PUST