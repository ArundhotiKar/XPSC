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
        string s;
        in s;
        int cost = abs((s[0] - 'a') - (s[s.size() - 1] - 'a'));
        if (s[0] == s[s.size() - 1])
        {
            cost = 0;
        }

        vector<pair<char, int>> tiles;
        for (int i = 0; i < s.size(); i++)
        {
            tiles.push_back({s[i], i + 1});
        }

        if (s[0] > s[s.size() - 1])
            sort(tiles.begin() + 1, tiles.end() - 1, greater<>());
        else
            sort(tiles.begin() + 1, tiles.end() - 1);

        vector<int> jump_tiles;
        for (auto tile : tiles)
        {
            if ((tile.first >= s[0] && tile.first <= s[s.size() - 1]) ||
                (tile.first <= s[0] && tile.first >= s[s.size() - 1]))
            {
                jump_tiles.push_back(tile.second);
            }
        }

        pr cost << " " << jump_tiles.size() << "\n";
        for (int i : jump_tiles)
        {
            pr i << " ";
        }
        pr "\n";
    }
    return 0;
}
