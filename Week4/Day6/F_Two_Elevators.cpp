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
      ll a,b,c;
      in a>>b>>c;
      
      ll t1=abs(a-1);
      ll t2=abs(b-c)+(c-1);
      if(t1<t2)
      {
        pr "1\n";
      } else if(t1>t2)
      {
         pr "2\n";
      }else
      {
        pr "3\n";
      }
   }
  return 0;
}

//Arundhoti Kar@
//From PUST