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
        ll b, c, d;
        in b >> c >> d;
        ll a = 0;
        bool f = true;
        for (int i = 0; i <= 62; i++)
        {
            ll bit_b = (b >> i) & 1;
            ll bit_c = (c >> i) & 1;
            ll bit_d = (d >> i) & 1;
            if (bit_d == 1)
            {
                if (bit_b == 1 && bit_c == 1)
                {
                    
                }
                else if (bit_b == 1)
                {
                    a |= (1LL << i);
                }
                else if (bit_c == 1)
                {
                    f = false;
                    break;
                }
                else
                {
                    a |= (1LL << i);
                }
            }
            else
            {
                if (bit_b == 1 && bit_c == 1)
                {
                    a |= (1LL << i);
                }
                else if (bit_b == 1)
                {
                    f = false;
                    break;
                }
                else if (bit_c == 1)
                {
                    
                }
                else
                {
                    
                }
            }
        }
        if(f)
        {
            pr a nl;
        }else
        {
            pr "-1\n";
        }
    }
    return 0;
}

// Arundhoti Kar@
// From PUST
