class Solution {
private:
    int f(int i, int j, string &s, string& t, vector<vector<int>>& dp){
        if(i==0)    return j;
        if(j==0)    return i;
        if(dp[i][j]!=-1)    return dp[i][j];
        if(s[i-1]==t[j-1]){
            return dp[i][j]=f(i-1,j-1,s,t,dp);
        }
        int rep=f(i-1,j-1,s,t,dp);
        int del=f(i-1,j,s,t,dp);
        int ins=f(i,j-1,s,t,dp);
        return dp[i][j]=1+min({
            rep,del,ins
        });
    }
public:
    int minDistance(string s, string t) {
        int n=s.size(),m=t.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return f(n,m,s,t,dp);
    }
};