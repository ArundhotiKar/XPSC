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
        int n,x,y;
        in n>>x>>y;
        int v1=n*x;
        int v2;
        if(n%2==0)
        {
             v2=n/2;
            v2=v2*y;
        }else
        {
             v2=n/2;
            v2=v2*y +x;
        }
        cout<<max(v1,v2)<<endl;
    } 
  return 0;
}

//Arundhoti Kar@
//From PUST