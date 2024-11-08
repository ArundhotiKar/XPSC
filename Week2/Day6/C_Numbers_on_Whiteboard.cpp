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
    while (t--) {
        int n;
        in n;
          
        pr 2 nl;
        priority_queue<int>p;
        for(int i=n; i>=1; i--)
        {
           p.push(i);
        }
        while(n>1)
        {
            int a=p.top();
            p.pop();
            int b=p.top();
            p.pop();
            cout<<a<<" "<<b<<endl;
             a+=b;
            if(a%2!=0)
            {
                a++;
            }
            p.push(a/2);
            n--;
        }
    } 
  return 0;
}

//Arundhoti Kar@
//From PUST