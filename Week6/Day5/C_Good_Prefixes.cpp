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
    vector<ll>v(n);
    ll presum=0;
    in v[0];
    presum=v[0];
    ll cnt=0;
    if(presum==0)
    cnt++;
    multiset<ll>s;
    s.insert(v[0]);
    for(int i=1; i<n; i++)
    {
       in v[i];
       s.insert(v[i]);
       presum+=v[i];
       ll it=*(--s.end());
       if(it==(presum-it))
       {
        cnt++;
       }
    }
    pr cnt nl;
  } 
  return 0;
}

//Arundhoti Kar@
//From PUST