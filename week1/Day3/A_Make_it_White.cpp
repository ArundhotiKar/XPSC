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
     while (t--)
     {
        int n;
        in n;
        string s;
        in s;
        int f=-1,l=0;
        for(int i=0; i<n; i++)
        {
           if(s[i]=='B')
           {
              if(f==-1)
              f=i;
              l=i;
           }
        }
        cout<<(l-f)+1<<endl;
     }
     
  return 0;
}

//Arundhoti Kar@
//From PUST