#include<bits/stdc++.h>
#define ll long long
#define in cin>>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout<<
#define nl <<endl;
using namespace std;
const ll MOD=1e9+7;
ll power(ll x, ll y)
{
  ll ans=1%MOD;
  while(y)
 {
    if(y&1)
    {
       ans=(1LL * ans % MOD * x %MOD) % MOD;
    }
    x=1LL * x * x % MOD ;
    y >>= 1; 
 }
  return ans;
}
int main()
{   
  ios::sync_with_stdio(false);
  cin.tie(nullptr); 
   int t;
   in t;
   while(t--)
   {
      string p,s;
      in p>>s;
      sort(p.begin(),p.end());
      int l=0,r=0;
      string ans="";
      bool ok=false;
      while(r<s.size())
      {
          ans+=s[r];
          if(r-l+1==p.size())
          {
             string tem=ans;
              sort(ans.begin(),ans.end());
              if(ans==p)
              {
                  ok =true;
                  pr "YES\n";
                  break; 
              }
              ans=tem;
              ans.erase(0,1);
              l++;
          }
          r++;
      }
      if(!ok)
      {
        pr "NO\n";
      }
   }
  return 0;
}

//Arundhoti Kar@
//From PUST