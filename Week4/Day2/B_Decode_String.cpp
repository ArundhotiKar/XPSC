#include <bits/stdc++.h>
#define ll long long
#define in cin >>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout <<
#define nl << endl;
using namespace std;
void decodeString(int n, string t)
{
    string result = "";
    for (int i = n - 1; i >= 0; i--)
    {
        if (t[i] == '0')
        {

            int num = (t[i - 2] - '0') * 10 + (t[i - 1] - '0');
            char ch = (num - 1) + 'a';
            result += ch;
            i -= 2;
        }
        else
        {

            int num = t[i] - '0';
            char ch = (num - 1) + 'a';
            result += ch;
        }
    }
    reverse(result.begin(), result.end());
    cout << result << endl;
}
int main()
{
    int t;
    in t;
    while(t--)
    {
        int n;
        in n;
        string s;
        in s;
        decodeString(n,s);
    }
    return 0;
}

// Arundhoti Kar@
// From PUST