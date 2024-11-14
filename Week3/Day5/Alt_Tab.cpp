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
    map<string,int>m;
    vector<string>v1(n);
    while(n--)
    {
        string s;
        in s;
        v1.push_back(s);
        int l=s.size();
        m[s]++;
        
    }
    
    for(int i=v1.size()-1; i>=0; i--)
    {
        string ss=v1[i];
        int l=ss.size();
        if(m[v1[i]]!=0)
        {
            cout<<ss[l-2]<<ss[l-1];
            m[ss]=0;
        }
    } 
  return 0;
}

//Arundhoti Kar@
//From PUST