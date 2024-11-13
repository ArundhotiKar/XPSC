#include<bits/stdc++.h>
#define ll long long
#define in cin>>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout<<
#define nl <<endl;
using namespace std;
void solve()
{
    int n;
    in n;
    vector<ll>v;
    for(int i=0; i<n; i++)
    {
        ll a;
        in a;
        if(a!=0)
        v.push_back(a);
    }
    ll sum=0,cnt=0;
    int sz=v.size(),l=-1,r=0;
    while(r<sz)
    {
        if(v[r]<0)
        {
            sum+=abs(v[r]);
            l=r;
            r++;
            
        }else 
        {
            if(l!=-1)
            {
                cnt++;
                l=-1;
            }
            sum+=(v[r]);
            r++;
        }
    }
    if (!v.empty() && v[r - 1] < 0) 
        cnt++;
    cout<<sum<<" "<<cnt<<endl;
    
}
int main()
{   
     int t;
     in t;
     while(t--)
     {
        solve();
     }
  return 0;
}

//Arundhoti Kar@
//From PUST