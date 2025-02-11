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
        int n;
        in n;
        ll ans=0; 
        map<ll,ll>mp;
         int cnt=0,a;
         for(int i=0; i<n; i++)
         {
            in a;
            a=a-i;
            mp[a]++;
         }
         for(auto it=mp.begin(); it!=mp.end(); it++)
         {
            ll tem=it->second; 
             ans=ans+(tem*(tem-1))/2;
         }

         pr ans nl;
    }
  return 0;
}

//Arundhoti Kar@
//From PUST