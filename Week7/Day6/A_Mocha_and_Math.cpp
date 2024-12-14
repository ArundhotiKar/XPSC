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
   int t;
   in t;
   while(t--)
   {
      int n;
      in n;
      vector<ll>a(n);
      ll ans=0;
      in a[0];
      ans=a[0];
      for(int i=1; i<n; i++)
      {
          in a[i];
          ans &=a[i];
      }
      pr ans nl;
   }
  return 0;
}

//Arundhoti Kar@
//From PUST