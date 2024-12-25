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
void solve()
{
    int n;
    in n;
    char mat[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            in mat[i][j];
        }
    }
    ll ans=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            char p1=mat[i][j];
            char p2=mat[j][n-1-i];
            char p3=mat[n-1-i][n-1-j];
            char p4=mat[n-1-j][i];

            char m=max({p1,p2,p3,p4});

            ans+=(m-p1);
            ans+=(m-p2);
            ans+=(m-p3);
            ans+=(m-p4);


        }
    }
    pr ans/4 nl;
}
int main()
{   
  ios::sync_with_stdio(false);
  cin.tie(nullptr); 
  int t;
  in t;
  while(t--)
  {
     solve();
  } 
  return 0;
}

//Arundhoti Kar@
//From PUST