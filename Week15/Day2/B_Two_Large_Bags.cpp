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
     vtr a(n);
     map<int, int>m;
     for(int i=0; i<n; i++)
     {
         in a[i];
         m[a[i]]++;
     }
     for(int i=0; i<n; i++)
     {
        int tem=a[i];
        while(m[tem]>2)
        {
            m[tem]--;
            m[tem+1]++;
            tem++;
        }
     }
     bool ok=true;
     for(auto i : m)
     {
         if(i.second%2!=0)
         {
            pr "No\n";
            ok=false;
            break;
         }
     }
     if(ok)
     pr "Yes\n";
  } 
  return 0;
}

//Arundhoti Kar@
//From PUST