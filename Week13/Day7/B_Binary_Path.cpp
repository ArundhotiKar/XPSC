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
      string a,b;
      in a>>b;
      int i=1;
      ll cnt=1;
      for(i=1; i<n; i++)
      {
         if(a[i]==b[i-1])
         cnt++;
         else if(a[i]<b[i-1])
         cnt=1;
         else 
         break;
      }
      for(int j=0; j<i; j++)
      {
         pr a[j];
      }
      for(int j=i-1; j<n; j++)
      {
        pr b[j];
      }
      cout << "\n" << cnt << endl;
   }
  return 0;
}

//Arundhoti Kar@
//From PUST