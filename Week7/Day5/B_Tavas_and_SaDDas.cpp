#include <bits/stdc++.h>
#define ll long long
#define in cin >>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout <<
#define nl << endl;
using namespace std;
ll binaryToDecimal(string binary)
{
    ll decimal = 0;
    ll base = 1; 

    for (int i = binary.length() - 1; i >= 0; i--)
    {
        if (binary[i] == '1')
        {
            decimal += base;
        }
        base *= 2;
    }
    return decimal;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    in n;
    int digit = 0;
    ll tem = n;
    while (tem > 0)
    {
        digit++;
        tem /= 10;
    }
    string str = to_string(n);
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '4')
            str[i] = '0';
        if (str[i] == '7')
            str[i] = '1';
    }
    ll num=binaryToDecimal(str);
    ll ans=1;
    for(int i=1;i<digit; i++)
    {
        ans+=(1LL<<i);
    }
    ans+=(num);
    pr ans nl;
    return 0;
}

// Arundhoti Kar@
// From PUST