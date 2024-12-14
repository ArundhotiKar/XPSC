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
  ios::sync_with_stdio(false);
  cin.tie(nullptr); 
  int t;
  in t;
  while(t--)
  {
    int n;
    in n;
    vector<int>a(n);
    int mn=INT16_MAX;
    int mx=INT16_MIN;
    for(int i=0; i<n; i++)
    {
        in a[i];
        mx=max(mx,a[i]);
        mn=min(mn,a[i]);
    }
    
    // max valuer off bit gula on korte hobe @ min er on bit gula off
    
    int max_bit=__lg(1024);
    for(int i=0; i<n; i++)
    {
        if(a[i]==mn)
        continue;
        for(int j=0; j<=max_bit; j++)
        {
            if((1LL << j)&mn )
            {
               if((1LL <<j)&a[i]) 
               {
                 continue;
               }else
               {
                  mn = mn & ~(1LL << j);
               }
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]==mx)
        continue;
        for(int j=0; j<=max_bit; j++)
        {
            if((1LL << j)&mx )
            continue;
            if(a[i]&(1LL<<j))
            {
                mx = mx | (1LL << j);
            }
        }

    }
    pr mx- mn nl;
    
  } 
  return 0;
}

//Arundhoti Kar@
//From PUST