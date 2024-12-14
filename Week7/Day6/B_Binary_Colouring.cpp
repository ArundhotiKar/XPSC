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
        ll n;
        in n;
        vtr v;
        while(n>0)
        {
           if(n%2==0)
           {
             v.push_back(0);
             n=n/2;
           }else if((n/2)%2==0)
           {
            v.push_back(1);
            n=n/2;
           }else
           {
            v.push_back(-1);
            n=(n/2) +1;
           }
        }
        pr v.size() nl;
        for(int i=0; i<v.size(); i++)
        {
          pr v[i]<<" ";
        }
        pr "\n";
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