#include<bits/stdc++.h>
#define ll long long
#define in cin>>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout<<
#define nl <<endl;
using namespace std;
const ll MOD=1e9+7;
ll power(ll x, ll y)
{
  ll ans=1%MOD;
  while(y)
 {
    if(y&1)
    {
       ans=(1LL * ans % MOD * x %MOD) % MOD;
    }
    x=1LL * x * x % MOD ;
    y >>= 1; 
 }
  return ans;
}
void solve() {
    int N;
    cin >> N;
    
    vector<int> X(N), Y(N);
    for (int i=0; i<N; i++) in X[i];
    for (int i=0; i<N; i++) in Y[i];
    
    for (int i = 0; i < N; i++) {
        int P = X[i]; 
        
        
        vector<pair<int, int>> L;
        for (int j = 0; j < N; j++) {
            L.push_back({abs(X[j] - P), X[j]});
        }
        
        
        sort(L.begin(), L.end());
        
        
        vector<int> testY;
        for (auto p : L) 
        testY.push_back(p.second);
        
        
        if (testY == Y) {
            pr i + 1 << "\n"; 
            return;
        }
    }
    
    
    pr  "-1\n";
}
int main()
{   
  ios::sync_with_stdio(false);
  cin.tie(nullptr); 
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