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
    int t;
    in t;
    while(t--)
    {
        int n;
        char c;
        in n>>c;
        string s;
        in s;
        int ans=0;
        int cnt=0;
        bool f=false;
        s+=s;
        if(c=='g')
        {
            pr "0" nl;
            continue;
        }
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==c && f==false)
            {
                cnt=0;
                f=true;
            }
            if(s[i]=='g')
            {
                ans=max(cnt,ans);
                f=false;
            }
            if(f)
            {
                cnt++;
            }
        }
        pr ans nl;
        
    } 
  return 0;
}

//Arundhoti Kar@
//From PUST