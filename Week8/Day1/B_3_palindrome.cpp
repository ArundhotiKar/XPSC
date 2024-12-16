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
  ios::sync_with_stdio(false);
  cin.tie(nullptr); 
  int n;
  in n;
  deque<char>d;
//   d.push_back('c');
  d.push_back('b');
  d.push_back('b');
  d.push_back('a');
  d.push_back('a');
  
  while (n--)
  {
     pr d[d.size()-1];
     d.push_front(d[d.size()-1]);
     d.pop_back();
  }
  
  return 0;
}

//Arundhoti Kar@
//From PUST