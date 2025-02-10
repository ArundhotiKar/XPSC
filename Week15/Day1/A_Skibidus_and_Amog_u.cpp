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
    string s;
    in s;
    int n=s.size();
    if(s[n-1]=='s' && s[n-2]=='u')
    {
        s[n-2]='i';
        for(int i=0; i<n-1; i++)
        {
            pr s[i];
        }
        pr "\n";
    }else
    {
        if(s[n-1]=='s')
        {
            s[n-1]='i';
        }
        pr s nl;
    }
    
  }
  return 0;
}

//Arundhoti Kar@
//From PUST