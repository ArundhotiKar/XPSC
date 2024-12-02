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
        int x, y;
        in x >> y;
        ll tem = x + (y * 4);
        int y_occupied = 0, x_Extra_occupied = 0;
        if (y % 2 == 0)
        {
            y_occupied = y / 2;
            if (y_occupied * 7 < x)
            {
                x_Extra_occupied = (x - (y_occupied * 7));
                if (x_Extra_occupied % 15 == 0)
                {
                    x_Extra_occupied /= 15;
                }
                else
                {
                    x_Extra_occupied /= 15;
                    x_Extra_occupied++;
                }
            }
        }
        else
        {
            y_occupied = (y / 2) + 1;
            
            if ((y_occupied * 7)  < x-4)
            {
                x_Extra_occupied = (x - (y_occupied * 7)) - 4;
                if (x_Extra_occupied % 15 == 0)
                {
                    x_Extra_occupied /= 15;
                }
                else
                {
                    x_Extra_occupied /= 15;
                    x_Extra_occupied++;
                }
            }
        }
        pr y_occupied+x_Extra_occupied nl;
    }
    return 0;
}

// Arundhoti Kar@
// From PUST