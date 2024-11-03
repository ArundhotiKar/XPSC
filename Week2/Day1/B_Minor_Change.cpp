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
    string s,t;
    in s>>t;
    int sz=s.size();
    int cnt=0;
    for(int i=0; i<sz; i++)
    {
        if(s[i]!=t[i])
        {
            cnt++;
        }
    } 
    pr cnt;
  return 0;
}

//Arundhoti Kar@
//From PUST