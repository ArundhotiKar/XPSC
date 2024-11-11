#include<bits/stdc++.h>
#define ll long long
#define in cin>>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout<<
#define nl <<endl;
using namespace std;
ll max_subArray(vector<ll>v,ll k)
{
        ll l=0,r=0,ans=0,sum=0;
        while(r<v.size())
        {
            sum+=v[r];
            if(r-l+1==k)
            {
                ans=max(ans,sum);
                sum-=v[l];
                l++;
                r++;
            }else
            {
                r++;
            }
        }
        return ans;

}
int main()
{   
    ll n;
    in n;
    vector<ll>v(n);
    for(int i=0; i<n; i++)
    {
        in v[i];
    }
    ll k;
    in k;
  cout<<max_subArray(v,k);
  return 0;
}

//Arundhoti Kar@
//From PUST