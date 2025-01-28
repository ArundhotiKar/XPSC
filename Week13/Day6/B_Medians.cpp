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
     in n>>k;
     if(n==1 && k==1)
     {
        pr 1<<"\n"<<1 nl;
        continue;
     }
     if(k>1 && k<n)
     {
        if(k%2!=0)
        {
            pr 3 nl;
            pr 1 <<" "<< k-1 <<" "<<k+2<<"\n";
        }else
        {
            pr 3 nl;
            pr 1 <<" "<< k <<" "<<k+1<<"\n";
        }
     }else
     {
        pr "-1\n";
     }
  } 
  return 0;
}

//Arundhoti Kar@
//From PUST