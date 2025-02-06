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
       string s;
       in s;
       for(int i=1; i<s.size(); i++)
       {
          int j=i;
          int cnt=1;
           while(j>0 && (s[j]-'0')>0 && (s[j-1]-'0')<(s[j]-'0' -cnt))
           {
              char tem1=s[j-1];
              char tem2=(s[j]-'0'-cnt)+'0';
              s[j-1]=tem2;
              s[j]=tem1;
              j--;
           }
       }
       pr s nl;
   }
  return 0;
}

//Arundhoti Kar@
//From PUST