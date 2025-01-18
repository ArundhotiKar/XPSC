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
  int n;
  in n;
  if(n%2==0)
  {
    pr n/2 nl;
    for(int i=0; i<n/2; i++)
    {
        pr 2 <<" ";
    }
  }else
  {
     pr n/2 nl;
     for(int i=1; i<n/2; i++)
     {
        pr 2 <<" ";
     }
     pr 3 nl;
  }
  return 0;
}

//Arundhoti Kar@
//From PUST