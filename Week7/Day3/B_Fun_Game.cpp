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
    string s,t;
    in n>>s>>t;
    
    if(s[0]=='1'|| s==t)
    {
        pr "YES\n";
        continue;
    }
     bool  b=false,c=false;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='1' && !c)
        {
            b=true;
            break;
        }
        if(s[i]=='0' && t[i]=='1')
        {
            c=true;
            break;
        }
    }
    if(b)
    {
        pr "YES\n";
    }else
    {
        pr "NO\n";
    }
  } 
  return 0;
}

//Arundhoti Kar@
//From PUST