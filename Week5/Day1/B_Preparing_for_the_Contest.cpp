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
    int n,k;
    in n>>k;
    vector<int>v;
    for(int i=n-k;i>=1; i--)
    {
        v.push_back(i);
    }
    for(int i=n-k+1; i<=n; i++)
    {
        v.push_back(i);
    }
    for(int i: v)
    {
        pr i<<" ";
    }
    pr "\n";

  } 
  return 0;
}

//Arundhoti Kar@
//From PUST