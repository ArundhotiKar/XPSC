#include <bits/stdc++.h>
#define ll long long
#define in cin >>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout <<
#define nl << endl;
using namespace std;
void solve()
{
    int a;
    in a;
    map<string, int> m;
    vector<string>v;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < a; j++)
        {
            string s;
            in s;
            v.push_back(s);
            m[s]++;
        }
    }
    long long sum=0;
    for(int i=0; i<v.size(); i++)
    {
        if(m[v[i]]==1)
        sum+=3;
        else if(m[v[i]]==2)
        sum+=1;
        else
        sum+=0;
        if((i+1)%a==0)
        {
            cout<<sum<<" ";
            sum=0;
        }
    }
    
}
int main()
{
    int n;
    in n;
    while (n--)
    {
        solve();
        cout<<endl;
    }
    return 0;
}

// Arundhoti Kar@
// From PUST