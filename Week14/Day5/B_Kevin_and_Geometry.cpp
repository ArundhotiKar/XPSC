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
      map<ll,int>m,b;
      for(int i=0; i<n; i++)
      {
        in a[i];
        m[a[i]]++;
      }
      
      vtr ans,tem;
      srt(a);
      for(int i=a.size()-1; i>0; i--)
      {
        if(a[i]==a[i-1] && ans.size()<4)
        {
            ans.push_back(a[i]);
            ans.push_back(a[i-1]);
            b[a[i]]=-1;
            i--;
        }
      }
      if(ans.size()==0)
      {
        pr "-1\n";
        continue;
      }
      if(ans.size()==4)
      {
          for(ll i:ans)
          pr i<<" ";
          pr "\n";
          continue;
      }

      for(int i=a.size()-1; i>=0; i--)
      {
          if(b[a[i]]!=-1 || (b[a[i]]==-1 && m[a[i]]>2))
          {
             if(b[a[i]]==-1)
             {
                m[a[i]]--;
             }
             tem.push_back(a[i]);
          }
      }
      ll sum=ans[0]+ans[1];
      for(int i=0; i<tem.size()-1; i++)
      {
         if(tem[i]<(sum+tem[i+1]))
         {
            ans.push_back(tem[i]);
            ans.push_back(tem[i+1]);
            break;
         }
      }
      if(ans.size()<4)
      {
        pr "-1\n";
        continue;
      }else
      {
          for(ll i:ans)
          pr i<<" ";
          pr "\n";
      }
  } 
  return 0;
}

//Arundhoti Kar@
//From PUST