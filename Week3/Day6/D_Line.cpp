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
        string s;
        in n>>s;
        ll total=0;
        int total_change=0;
        vector<ll>change;
        for(int i=0; i<n; i++)
        {
            int L=i,R=n-i-1;
            if(s[i]=='L')
            {
                if(L<R)
                {
                    total_change++;
                    total+=R;
                    change.push_back(R-L);
                }else
                {
                    total+=L;
                }
            }else
            {
                if(L>R)
                {
                    total_change++;
                    total+=L;
                    change.push_back(L-R);
                }else
                {
                    total+=R;
                }
            }
        }
        srt(change);
        vector<ll>ans;
        int i;
        for( i=0; i<total_change-1; i++)
        {
           ans.push_back(total-change[i]);
           change[i+1]+=change[i];
        }
        for(int j=i; j<n; j++)
        {
              ans.push_back(total);
        }
        srt(ans);
        for(int i=0; i<ans.size(); i++)
        {
            pr ans[i] <<" ";
        }
        cout<<endl;

     }
  return 0;
}

//Arundhoti Kar@
//From PUST