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
        in n;
        vector<int>v(n);
        int ans=0,cnt=0;
        map<int,int>m;
        for(int i=0; i<n; i++)
        {
            in v[i];
            m[v[i]]++;
        }
        for(int i=0; i<n; i++)
        {
            cnt++;
            if(m[v[i]]>1)
            {
                ans+=cnt;
                cnt=0;
                m[v[i]]--;
            }
        }
       
       pr ans nl;

    } 
  return 0;
}

//Arundhoti Kar@
//From PUST