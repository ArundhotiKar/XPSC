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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            in a[i];
        }
        string q = "1";
        int tem = a[0];
        int c=0;
        stack<int>st;
        st.push(a[0]);
        for(int i=1; i<n; i++)
        {
            if(st.top()<=a[i] && c==0)
            {
                st.push(a[i]);
                q+='1';
                continue;
            }
            if(a[i]<st.top() && tem>=a[i] && c==0)
            {
                st.push(a[i]);
                c=1;
                q+='1';
                continue;
            }
            if(c==1)
            {
                if(a[i]>=st.top() && tem>=a[i])
                {
                    st.push(a[i]);
                    q+='1';
                    continue;
                }
            }
            q+='0';

        }
        pr q nl;
    }
    return 0;
}

// Arundhoti Kar@
// From PUST