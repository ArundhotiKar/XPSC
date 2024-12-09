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
  int  n;
  in n;
  vector<int>v(n);
  for(int i=0; i<n; i++)
  {
     in v[i];
  }
  bool flag=false;
  for(int mask=0; mask<(1<<n); mask++)
  {
      int sum=0;
     for(int k=0; k<n; k++)
     {
        if((mask>>k)&1)
        {
            sum+=v[k];
            
        }else
        {
            sum-=v[k];
            
        }
     }
     if(sum%360==0)
     {
        pr "YES\n";
        flag=true;
        break;
     }
  }
  if(!flag)
  {
    pr "NO\n";
  }
  return 0;
}

//Arundhoti Kar@
//From PUST