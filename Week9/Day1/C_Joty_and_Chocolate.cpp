#include<bits/stdc++.h>
#define ll long long
#define in cin>>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout<<
#define nl <<endl;
using namespace std;
int main()
{   
  ios::sync_with_stdio(false);
  cin.tie(nullptr); 
  ll n,a,b,p,q;
  in n>>a>>b>>p>>q;
  
  ll lcm=(a/__gcd(a,b))*b; 
  ll P=(n/a)*p,Q=(n/b)*q;
  ll ans=(P+Q)-(n/lcm)*(p+q)+(n/lcm)*(max(p,q));
  pr ans nl;
  return 0;
}

//Arundhoti Kar@
//From PUST