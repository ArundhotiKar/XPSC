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
   int n,k;
   in n>>k;
   vector<ll>a(n);
   for(int i=0; i<n; i++)
   {
      in a[i];
   }
   int l=0,r=0;
   ll cnt=0;
   map<ll,ll>freq;
   while(r<n)
   {
       freq[a[r]]++;
       while(freq.size()>k)
       {
           freq[a[l]]--;
           if(freq[a[l]]==0)
           {
             freq.erase(a[l]);
           }
           l++;
       }
       cnt+=(r-l+1);
       r++;
   }
   pr cnt nl;
  return 0;
}

//Arundhoti Kar@
//From PUST