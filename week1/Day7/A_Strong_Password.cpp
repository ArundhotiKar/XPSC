#include<bits/stdc++.h>
#define ll long long
#define in cin>>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout<<
#define nl <<endl;
using namespace std;
void solve() 
{
	string s;
	cin >> s;
 
	ll n = s.size();
	bool f = true;
	for(ll i = 0; i < n - 1; i++) 
    {
		cout << s[i];
		if(s[i + 1] == s[i] && f) 
        {
			f = false;
			if(s[i] == 'a') 
            {
                if(s[i+1]!='b')
                 cout << "b";
                 else
                 cout <<"c";

            }else
            {
                if(s[i+1]!='a')
                cout<<"a";
                else
                cout<<"b";
            }
		}
	}
	cout << s[n - 1];
	if(f) 
    {
		if(s[n - 1] == 'a') cout << "b";
		else cout << "a";
	}
	cout nl;
}
 
int main()
{   
     int t;
     in t;
     while(t--)
     {
        solve();
     }
  return 0;
}

//Arundhoti Kar@
//From PUST