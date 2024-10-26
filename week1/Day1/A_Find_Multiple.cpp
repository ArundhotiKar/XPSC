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
    int a,b,c;
    in a>>b>>c;
     int r=-1;
     for(int i=a; i<=b; i++)
     {
        if(i%c==0)
        {
            r=i;
            break;
        }
     }
    pr r nl;
  return 0;
}

//Arundhoti Kar@
//From PUST