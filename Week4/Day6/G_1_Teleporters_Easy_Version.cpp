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
    int n,c;
    in n>>c;
    vector<pair<ll,int>>v;
    
    for(int i=0; i<n; i++)
    {
        ll a;
        in a;
        v.push_back({a,i+1});
    }
    vector<ll>sum;
    for( auto j: v)
    {
      pair<ll,int>i;
         i=j;
        sum.push_back(i.first+i.second);
    }
    srt(sum);
    int ans=0;
    for(int i=0; i<sum.size(); i++)
    {
          if(c>=sum[i])
          {
            ans++;
            c-=sum[i];
          }else
          {
            break;
          }
    }
    pr ans nl;
  } 
  return 0;
}

//Arundhoti Kar@
//From PUST