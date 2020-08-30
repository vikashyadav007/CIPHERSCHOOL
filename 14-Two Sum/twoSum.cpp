class Solution {
public:
   int cal(int n,vector<int> &dp){
        if(dp[n]!=-1) return dp[n];
        if(n==0) return 0;
        int minE= INT_MAX;
        for(int i=1;i*i<=n;i++){
            int curr = cal(n-(i*i),dp)+1;
            minE = min(minE,curr); 
        }
         dp[n]=minE;
         return dp[n];
    }
    
    int numSquares(int n) {
        vector<int> dp(n+1,-1);
       return cal(n,dp);
    }
};
