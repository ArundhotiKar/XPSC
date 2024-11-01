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
    map<string,string>mp;
    for(int i=0; i<n; i++)
    {
        string s1,s2;
        in s1>>s2;
        mp[s2]=s1;
    }
    for(int i=0; i<m; i++)
    {
        string s1,s2;
        in s1>>s2;
        string tem=s2;
        tem.erase(tem.begin()+tem.size()-1);
        cout<<s1<<" "<<s2<<" #"<<mp[tem]<<endl;
    }
    
  return 0;
}

//Arundhoti Kar@
//From PUST