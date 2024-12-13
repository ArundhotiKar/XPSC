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
       ll n;
       in n;
       if(__builtin_popcount(n)==1)
       {
          pr 0<<" "<<n nl;
       }else
       {
          ll bit=__lg(n);
          ll b=(1LL <<bit );
          ll a=n^b;
          pr a<<" "<<b nl;
       }
       
   }
  return 0;
}

//Arundhoti Kar@
//From PUST