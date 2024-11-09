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
        vector<int>v(n);
        string s;
        map<int,int>mp,m;
        for(int i=0; i<n; i++)
        {
            in v[i];
            m[v[i]]=i+1;
        }
        in s;
        vector<int>like,dislike;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
            like.push_back(v[i]);
            else
            dislike.push_back(v[i]);
        }
        srt(like);
        srt(dislike);
        for(int i=like.size()-1; i>=0; i--)
        {
            mp[like[i]]=n;
            n--;
        }
        for(int i=dislike.size()-1; i>=0; i--)
        {
            mp[dislike[i]]=n;
            n--;
        }
        for(int i=0; i<v.size(); i++)
        {
            v[i]=mp[v[i]];
        }
        for(auto i: v)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
        
        

    } 
  return 0;
}

//Arundhoti Kar@
//From PUST