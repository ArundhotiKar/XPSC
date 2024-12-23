#include<bits/stdc++.h>
#define ll long long
#define in cin>>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout<<
#define nl <<endl;
using namespace std;
const int mod=1e9 + 7;
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
     int ans=1;
     for(int i=1; i<=n; i++)
     {
         ans=(1LL * ans%mod * i%mod) % mod;
     }
     pr ans <<"\n";
   }
  return 0;
}

//Arundhoti Kar@
//From PUST