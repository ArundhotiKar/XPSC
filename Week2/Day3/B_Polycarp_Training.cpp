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
    int n;
    cin >> n;
    vector<int> con(n);

    for (int i = 0; i < n; i++)
    {
        cin >> con[i];
    }

    srt(con);

    int d = 0;
    for (int i = 0; i < n; i++)
    {
        if (con[i] > d)
        {
            d++;
        }
    }

    cout << d << endl;
    return 0;
}

// Arundhoti Kar@
// From PUST