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
        vector<ll>v;
        ll a;
        for(int i=0; i<n; i++)
        {
            in a;
            if(a!=0)
            v.push_back(a);
        }
    
        if (v.size() < 2)  
        {
            cout << "YES\n";
            continue;
        }
        srt(v);
        bool f=true;
        for(int i=0; i<v.size()-1; i++)
        {
            if(v[i]!=v[i+1])
            {
                cout<<"NO\n";
                f=false;
                break;
            }
        }
        if(f)
        cout<<"YES\n";
     }
  return 0;
}

//Arundhoti Kar@
//From PUST