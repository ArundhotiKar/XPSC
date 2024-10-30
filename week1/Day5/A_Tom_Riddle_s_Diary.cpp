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
    while(n--)
    {
        string s;
        in s;
        if(m[s]==0)
        cout<<"NO\n";
        else
        cout<<"YES\n";
        m[s]++;
    } 
  return 0;
}

//Arundhoti Kar@
//From PUST