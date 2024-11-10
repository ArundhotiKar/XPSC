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
    int n,m;
    in n>>m;
    
    vector<long long>v1(n);
    vector<long long>v2(m);
    for(int i=0; i<n; i++)
    {
        in v1[i];
    }
    for(int i=0; i<m; i++)
    {
        in v2[i];
    }
    int l=0,r=0;
    int cnt=0;
    while(r<m)
    {
        if(v1[l]>=v2[r])
        {
            cout<<cnt<<" ";
            r++;
        }else
        {
            l++;
            cnt++;
        }
    }
  return 0;
}

//Arundhoti Kar@
//From PUST