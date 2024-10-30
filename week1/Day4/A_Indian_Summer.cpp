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
    cin>>t;
    set<pair<string,string>>st;
    while(t--)
    {
       string a,b;
       cin>>a>>b;
       st.insert({a,b});
    } 
    cout<<st.size();
  return 0;
}

//Arundhoti Kar@
//From PUST