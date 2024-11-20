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
     unsigned ll  n,s,sum=0;
     in n>>s;
     vector<int>v(n);
     for(int i=0; i<n; i++)
     {
        in v[i];
     }
     ll l=0,r=0,ans=0;
     while(r<n)
     {
        sum+=v[r];
        if(sum<=s)
        {
            ans=max(ans, r-l+1);
        }else
        {
           sum-=v[l];
           l++;
           
        }
        r++;
     }
     
     pr ans nl;


  return 0;
}

//Arundhoti Kar@
//From PUST