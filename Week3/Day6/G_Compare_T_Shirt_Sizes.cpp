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
        string ss, pp;
        in ss >> pp;
        int l1 = ss.size();
        int l2 = pp.size();
        if(ss==pp)
        {
            pr "=" nl;
            continue;
        }
        if(ss[l1-1]>pp[l2-1])
        {
            pr "<" nl;
        }else if(ss[l1-1]<pp[l2-1])
        {
            pr ">" nl;
        }else
        {
            if(ss[l1-1]=='S')
            {
                if(l1>l2)
                {
                    pr "<" nl;
                }
                else
                {
                    pr ">" nl;
                }

            }else
            {
                if(l1>l2)
                {
                    pr ">" nl;
                }
                else
                {
                    pr "<" nl;
                }
            }
        }
    }

        return 0;
    }


    // Arundhoti Kar@
    // From PUST