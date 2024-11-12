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
    while (t--)
    {
        int n,k;
        in n>>k;
        string s;
        in s;
        int l=0,r=0,cnt=0,ans=INT_MAX;
        while(r<n)
        {
            if(s[r]=='W')
            cnt++;
            if(r-l+1==k)
            {
                ans=min(ans,cnt);
                if(s[l]=='W')
                cnt--;

                l++;
                r++;
            }else
            {
                r++;
            }
        }
        pr ans nl;
    }
     
  return 0;
}

//Arundhoti Kar@
//From PUST