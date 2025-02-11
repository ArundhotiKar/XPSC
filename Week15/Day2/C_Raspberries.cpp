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
      int n,k;
      in  n>>k;
      int even=0,odd=0;
      int ans=k;
      for(int i=0; i<n; i++)
      {
          int x;
          in x;
          if(x%2==0) even++;
          else odd++;
          if(x%k==0) ans=0;

          ans=min(ans, k-(x%k));
      }
      if(k==4)
      {
          if(even>1)
          ans=0;
          else if(even==1)
          ans=min(ans,1);
          else
          ans=min(ans,2);
      }
      pr ans nl;
  } 
  return 0;
}

//Arundhoti Kar@
//From PUST