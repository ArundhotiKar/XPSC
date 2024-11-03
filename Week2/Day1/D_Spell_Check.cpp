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
        string s;
        in n>>s;
        int sz=s.size();
        if(sz==5)
        {
            int cnt=0;
            set<char>st;
            set<char>tem={'T','i','m','r','u'};
            for(int i=0; i<5; i++)
            {
                   st.insert(s[i]);
            }
            if(st==tem)
            {
                pr "YES\n";
                continue;
            }
        }
        pr "NO\n";
    } 
  return 0;
}

//Arundhoti Kar@
//From PUST