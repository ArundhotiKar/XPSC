#include <bits/stdc++.h>
#define ll long long
#define in cin >>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout <<
#define nl << endl;
using namespace std;
int main()
{
    int t;
    in t;
    

    while (t--)
    {
        string s;
        in s;
        stack<int> count_cap_indx;
        stack<int> count_small_indx;
        
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] =='B')
            {
                if (!count_cap_indx.empty())
                {
                    int a = count_cap_indx.top();
                    s[a]='#';
                    count_cap_indx.pop();
                }else
                {
                    count_cap_indx.push(i);
                    
                }
                
            }else if (s[i]=='b')
            {
                if (!count_small_indx.empty())
                {
                    int a = count_small_indx.top();
                    s[a]='#';
                    count_small_indx.pop();
                    
                }else
                {
                    count_small_indx.push(i);
                    
                }
            }else if (s[i] >= 'a' && s[i] <= 'z')
            {
                count_small_indx.push(i);
            }else
            {
                count_cap_indx.push(i);
            }
        }
        
       for(int i=0; i<s.size(); i++)
       {
           if(s[i]!='b'&&s[i]!='B'&&s[i]!='#')
           {
            cout<<s[i];
           }
       }
       cout<<endl;
    }

    return 0;
}

// Arundhoti Kar@
// From PUST