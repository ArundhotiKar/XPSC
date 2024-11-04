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
        string s1,s2;
        in s1>>s2;
        int c=0;
        for(int i=0; i<n; i++)
        {
            if(s1[i]=='B')
             s1[i]='G';
            
            if(s2[i]=='B')
            s2[i]='G';
            if(s1[i]==s2[i])
            {
                c++;
            }
        }
        if(c==n)
        cout<<"YES\n";
        else
        cout<<"NO\n";

     }
  return 0;
}

//Arundhoti Kar@
//From PUST