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
    int n;
    in n;
    int tem = n;
    if(n==0)
    {
        pr "0000";
        return 0;
    }
    int cnt=0;
    while (tem>0)
    {
        cnt++;
        tem=tem/10;
    }
    for(int i=0; i<(4-cnt); i++)
    {
       pr "0";
    }
    pr n nl;
  return 0;
}

//Arundhoti Kar@
//From PUST