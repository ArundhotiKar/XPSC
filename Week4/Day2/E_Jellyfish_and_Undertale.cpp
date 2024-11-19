#include<bits/stdc++.h>
#define ll long long
#define in cin>>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout<<
#define nl <<endl;
using namespace std;
int main()
{   
    int t;
    in t;
    while(t--)
    {
        ll a,b;
        int n;
        in a >> b >>n;
        ll ans=b;
        for(int i=0; i<n; i++)
        {
            ll v;
            in v;
            if(v<a)
            {
                ans+=v;
            }else
            {
                ans+=(a-1);
            }
        }
        pr ans nl;
    } 
  return 0;
}

//Arundhoti Kar@
//From PUST