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
    cin >> t;
    while (t--)
    {
        int n, a, b;
        in n >> a >> b;

        vtr left, right;

        left.push_back(a);
        right.push_back(b);
        int i=n;
        while(left.size()!=n/2 && i>a)
        {
            if(i!=b)
            {
                left.push_back(i);
            }
            i--;
        }
        i=1;
        while(right.size()!=n/2 && i<b)
        {
            if(i!=a)
            {
                right.push_back(i);
            }
            i++;
        }
        
        if(left.size()==n/2 && right.size()==n/2)
        {
            
            for(int ii: left)
            {
               pr ii<<" ";
            }
            for(int ii: right)
            {
               pr ii<<" ";
            }
            pr "\n";
        }else
        {
            pr "-1\n";
        }
    } 
  return 0;
}

//Arundhoti Kar@
//From PUST
