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
    int n,m;
    in n>>m;
    vector<ll>a(n),b(m);
    for(int i=0; i<n; i++)
      in a[i];
    for(int i=0; i<m; i++)  
      in b[i];

      int l=0,r=0;
      vector<ll>ans;
      while(l<n && r<m)
      {
          if(a[l]>b[r])
          {
            ans.push_back(b[r]);
            r++;
          }else
          {
            ans.push_back(a[l]);
            l++;
          }
      }
      while(l<n)
      {
        ans.push_back(a[l]);
        l++;
      }
      while (r<m)
      {
        ans.push_back(b[r]);
        r++;
      }
      for(ll i=0; i<ans.size(); i++)
      {
        cout<<ans[i]<<" ";
      }
  return 0;
}

//Arundhoti Kar@
//From PUST