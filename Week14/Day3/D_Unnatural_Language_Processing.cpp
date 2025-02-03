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
     int n;
     in n;
     string s;
     in s;
     string ans="";
     for(int i=0; i<n; i++)
     {
        if(s[i]!='a' && s[i]!='e')
        {
            ans+=s[i++];
            ans+=s[i];
            if( (i+2 < n && s[i+2]!='a' && s[i+2]!='e') || i+1==n-1)
            {
                 ans+=s[i+1];
                 i++;
            }
            if(i<n-1)
            {
                ans+='.';
            }
        }
     }
     pr ans nl;

   }
  return 0;
}

//Arundhoti Kar@
//From PUST