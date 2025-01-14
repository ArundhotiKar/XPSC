#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int a[1000000]={0};
    for(int i=2; i<=1000000; i++)
    {
        if(a[i]==0)
        {
           for(int j=2; j*i<=1000000; j++) 
           {
               a[i*j]=1;
           }
        }
    }
    int x;
    cin>>x;
    long long int b,sq;
    for(int i=1; i<=x; i++)
    {
        cin>>b;
        sq=sqrt(b);
        if(sq==1)
        {
            cout<<"NO"<<endl;
        }else if(sq*sq==b&&a[sq]==0)
        {
            cout<<"YES"<<endl;
        } else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}