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
        int l=0,r=0,cnt=0,ans=0;
        while(r<n)
        {
            
            if(r-l+1==k)
            {
                if(s[l]=='B')
                {
                    ans++;
                    l+=k;
                    r+=k;
                }else
                {
                    l++;
                    r++;
                }
            }else
            {
                r++;
            }
        }
        if(l!=n)
        {
            for(int i=l; i<n; i++)
            {
                if(s[i]=='B')
                {
                    ans++;
                    break;
                }
            }
        }
        pr ans nl;
    }
     
  return 0;
}

//Arundhoti Kar@
//From PUST