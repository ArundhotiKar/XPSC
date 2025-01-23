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
      int n,a,b;
      in n>>a>>b;
      
      a--;
      b--;
      vtr ans(n);
      for(int i=0; i<n; i++)
      {
          ans[(a+i)%n]=i%2;
      }
      if(n%2==1 || (a-b)%2==0)
      {
          ans[a]=2;
      }
      for(int i: ans) 
        pr  i << " ";

        pr "\n";
   }
  return 0;
}

//Arundhoti Kar@
//From PUST