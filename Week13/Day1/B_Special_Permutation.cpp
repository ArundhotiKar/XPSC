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
    bool swp=false;
    if(a>b)
    {
        swap(a,b);
        swp=true;
    }
    if(a-1>=n/2 || n-b>=n/2)
    {
        pr -1 nl;
        continue;
    }
    vtr ans;
    if(swp)
    {
        swap(a,b);
    }
    map<int,bool>m;
    ans.push_back(a);
    m[a]=true;
    int tem=n,cnt=1;
    for(int i=1; cnt<n/2; i++)
    {
         if(!m[tem] && tem!=b)
         {
            ans.push_back(tem);
            m[tem]=true;
            cnt++;
         }
         tem--;
    }
    for(int i=1; i<=n; i++)
    {
        if(!m[i])
        {
          ans.push_back(i);
            m[i]=true;
        }
    }
    for(int i: ans)
    {
        pr i <<" ";
    }
    pr "\n";
  } 
  return 0;
}

//Arundhoti Kar@
//From PUST