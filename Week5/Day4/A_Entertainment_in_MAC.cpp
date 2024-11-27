#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    long long n;
    while(t--)
    {
       string s,s1;
        cin>>n>>s;
        int len=s.size();
        for (int i = len - 1; i >= 0; i--)
            {
               s1 += s[i];
            }
            if(s>s1)
            {
                cout<<s1+s<<endl;
            }else
            {
                cout<<s<<endl;
            }


    }
}