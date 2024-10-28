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
     ll n;
     in n;
     unsigned long long ans=0, sum=0,sum2=0;
     vector<ll>v;
     vector<ll>v1;
     for(int i=0; i<n; i++)
     {
        ll a;
        in a;
        if(a%2==0)
        {
            v.push_back(a);
            sum+=a;
        }else
        {
            v1.push_back(a);
            sum2+=a;
        }
     }
     srt(v1);
     if(sum2%2!=0 && !v1.empty())
     {
        ans= sum + sum2 - v1[0];
     }else
     {
        ans= sum + sum2;
     }
     pr ans nl;
  return 0;
}

//Arundhoti Kar@
//From PUST