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

int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
    
    int t;
    in t; 
    while(t--) 
    {
        int X, Y, Z, A, B, C;
        in X >> Y >> Z >> A >> B >> C; 
        
        int happy = 0;
        
        
        int smallSatisfy = min(X, A); 
        happy += smallSatisfy; 
        A -= smallSatisfy; 
        X -= smallSatisfy; 
        
        int largeSatisfy = min(Y, B);
        happy += largeSatisfy; 
        B -= largeSatisfy; 
        Y -= largeSatisfy; 
        
        int extraLargeSatisfy = min(Z, C);
        happy += extraLargeSatisfy;
        C -= extraLargeSatisfy; 
        Z -= extraLargeSatisfy; 
        
       
        int convertXLtoL = min(Z, B); 
        happy += convertXLtoL;
        B -= convertXLtoL; 
        Z -= convertXLtoL; 
        
        int convertXLtoS = min(Z, A); 
        happy += convertXLtoS;
        A -= convertXLtoS; 
        Z -= convertXLtoS; 
        
        
        int convertLtoS = min(Y, A); 
        happy += convertLtoS;
        A -= convertLtoS; 
        Y -= convertLtoS; 
        
        
        pr happy nl;
    }
    
    return 0;
}
