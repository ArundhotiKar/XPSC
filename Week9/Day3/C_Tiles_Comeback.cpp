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
     vector<int>a(n);
     
     for(int i=0; i<n; i++)
     {
        in a[i];
     }
     int f=a[0],l=a[n-1];
     int f_count=0,l_count=0;
     int last_f_idx=-1;
     for(int i=0; i<n; i++)
     {
        if(a[i]==f)
        f_count++;
        if(f_count==k)
        {
           last_f_idx=i;
           break;
        }
     }
     for(int i=last_f_idx+1; i<n; i++)
     {
        if(a[i]==l)
        l_count++;
     }
     if((f_count==k && l_count>=k)|| (l==f && f_count>=k))
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