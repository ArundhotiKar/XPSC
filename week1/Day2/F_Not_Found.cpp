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
    string s;
    in s;
    vector<int>v(26,0); 
    for(int i=0; i<s.size(); i++)
    {
        v[s[i]-'a']++;
    }
    bool flag=false;
    for(int i=0; i<26; i++)
    {
        if(v[i]==0)
        {
           char t=i+'a';
            cout<<t<<endl;
            flag =true;
            break;
        }
    }
    if(flag==false)
    {
        cout<<"None\n";
    }
  return 0;
}

//Arundhoti Kar@
//From PUST