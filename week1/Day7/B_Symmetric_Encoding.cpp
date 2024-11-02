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
        string s;

        int n;
        in n;
        in s;
        
        set<char>st(s.begin(),s.end());
        string tem(st.begin(),st.end());
        int sz=st.size();
        map<char,char>mp;
        
        for(int i=0; i<sz; i++)
        {
            mp[tem[i]]=tem[sz-i-1];
        }
        string b=s;
        for(int i=0; i<s.size(); i++)
        {
            b[i]=mp[s[i]];
        }
        cout<<b<<endl;

    } 
  return 0;
}

//Arundhoti Kar@
//From PUST