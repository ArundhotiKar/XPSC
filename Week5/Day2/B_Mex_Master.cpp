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
    vector<int>v(n);
    int cnt_0=0,cnt_1=0;
    int mx=0;
    for(int i=0; i<n; i++)
    {
        in v[i];
        if(v[i]==0)
        cnt_0++;
        else
        cnt_1++;

        mx=max(mx,v[i]);
    }
    
    if( (n-cnt_0)>=(cnt_0-1))
    {
        pr "0\n";
        continue;
    }
    
    if(mx>1 || mx==0)
    {
        pr "1\n";
    }else
    {
        pr "2\n";
    }
    
    
  } 
  return 0;
}

//Arundhoti Kar@
//From PUST