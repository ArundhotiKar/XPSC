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
     for(int i=0; i<n; i++)
     {
        in a[i];
     }
     int c=0;
     bool ok=true;
     for(int i=0; i<n;)
     {
        ll p=1<<c;
        vtr v;
        while(i<p && i<n)
        {
            v.push_back(a[i]);
            i++;
        }
        for(int j=1; j<v.size(); j++)
        {
            if(v[j-1]>v[j])
            {
                ok=false;
                break;
            }
        }
        if(!ok)
        break;
        c++;

     }
     if(ok)
     {
        pr "YES\n";
     }else
     {
        pr "NO\n";
     }
  } 
  return 0;
}

//Arundhoti Kar@
//From PUST