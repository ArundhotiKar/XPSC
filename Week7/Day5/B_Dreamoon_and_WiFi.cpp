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
   string s,t;
   in s>>t;
  
   ll target=0;
   for(int i=0; i<s.size(); i++)
   {
      if(s[i]=='+')
      target++;
      else
      target--;
   }
   ll qsn_mark=0, curr=0;
   for(int i=0; i<t.size(); i++)
   {
       if(t[i]=='+') curr++;
       else if(t[i]=='-') curr--;
       else
       qsn_mark++;
   }

  double d=1;
  ll dif=abs(target-curr);
  if(dif==0 && qsn_mark==0)
  {
    pr "1.000000000000" nl;
     return 0;
  }

  ll total_outcomes=(1LL<<qsn_mark);
  ll cnt=0;
  for(int i=0; i<total_outcomes; i++)
  {
       ll onbit=__builtin_popcount(i);
       ll off_bit = qsn_mark - onbit;  

       if((onbit-off_bit)+curr==target)
       {
        cnt++;
       }
  }
  pr fixed <<setprecision(12)<<(double)cnt/total_outcomes nl;
 

  return 0;
}

//Arundhoti Kar@
//From PUST

    
    
