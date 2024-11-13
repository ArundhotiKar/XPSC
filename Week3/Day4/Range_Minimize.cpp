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
        vector<ll>v1(n);
        for(int i=0; i<n; i++)
        {
            in v1[i];
            
        }
        if(n==3)
        {
            cout<<"0\n";
            continue;
        }
       srt(v1);
       ll tem1=v1[n-1]-v1[2];
       ll tem2=v1[n-3]-v1[0];
       ll tem3=v1[n-2]-v1[1];
       pr min(min(tem1,tem2),tem3) nl;
     } 
  return 0;
}

//Arundhoti Kar@
//From PUST