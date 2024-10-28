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
    int s,t;
    in s>>t;
    
    long long cnt=0;
    for(int i=0; i<=s; i++)
    {
        for(int j=0; j<=s; j++)
        {
            for(int k=0; k<=s; k++)
            {
                  if(i+j+k<=s && i*j*k<=t)
                  {
                    cnt++;
                  }
            }
        }
    }
    cout<<cnt;
  return 0;
}

//Arundhoti Kar@
//From PUST
