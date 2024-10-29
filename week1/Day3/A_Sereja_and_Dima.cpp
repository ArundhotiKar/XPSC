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
     vector<int>cards(n);
     for(int i=0; i<n; i++ )
     {
        in cards[i];
     }
     int sum1=0,sum2=0;
     int trac=0;
     for(int i=0; i<n; i++)
     {
        if(trac%2==0)
        {
            if(cards[i]>cards[n-1])
            {
                sum1+=cards[i];
            }else
            {
                sum1+=cards[n-1];
                n--;
                i--;
            }
        }else
        {
            if(cards[i]>cards[n-1])
            {
                sum2+=cards[i];
            }else
            {
                sum2+=cards[n-1];
                n--;
                i--;
            }
        }
        trac++;
     }
     cout<<sum1<<" "<<sum2<<endl;
  return 0;
}

//Arundhoti Kar@
//From PUST