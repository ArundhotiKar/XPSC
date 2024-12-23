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
  ll l,r;
  in l>>r;
  pr "YES\n";
   for(ll i=l; i<=r; i+=2)
   {
      pr i <<" "<<i+1 nl;
   }
  return 0;
}

//Arundhoti Kar@
//From PUST