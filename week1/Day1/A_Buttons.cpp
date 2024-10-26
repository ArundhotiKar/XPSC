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
    int a,b;
    in a>>b;
    if(a==b)
    {
        pr a+b nl;
        return 0;
    }
    int tem=max(a,b);
    int res=tem+tem-1;
    pr res nl;

  return 0;
}

//Arundhoti Kar@
//From PUST