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
     int l,r;
     in l>>r;
     if(r<4)
     {
        pr "-1\n";
        continue;
     }
     if(l==r)
     {
        bool f=false;
        for(int i=2; i<=sqrt(r); i++)
        {
            if(r%i==0)
            {
                int a=i;
                int b=(r/i-1)*i;
                pr a <<" "<<b nl;
                f=true;
                break;
            }
        }
        if(!f)
        {
            pr -1 nl;
        }
     }else
     {
        while(r>=l && r%2!=0)
        {
            r--;
        }
        pr r/2 <<" " <<r/2 nl;
     }
   }
  return 0;
}

//Arundhoti Kar@
//From PUST