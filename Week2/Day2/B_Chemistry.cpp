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
        int n,k;
        in n>>k;
        string s;
        in s;
        map<char,int>mp;
        for(int i=0; i<n; i++)
        {
            mp[s[i]]++;
        }
        int cnt=0;
        for(auto i: mp)
        {
             if(i.second%2!=0)
             cnt++;
        }
        cnt--;
        if(k>=cnt)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    } 
  return 0;
}

//Arundhoti Kar@
//From PUST