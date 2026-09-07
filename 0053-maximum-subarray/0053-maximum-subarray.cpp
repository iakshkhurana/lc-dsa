class Solution {
public:
    // int memo(int i, vector<int>& a, vector<int>& dp){
    //     if(i==0)    return a[0];
    //     if(dp[i]!=INT_MIN)  return dp[i];
    //     return dp[i]=max(a[i],a[i]+memo(i-1,a,dp));
    // }
    int kadane(vector<int>& nums){
        // return subarray with largest sum
        int sum=0;
        int best=nums[0];
        // agar negative hogyi toh reset sum to zero
        for(auto x:nums){
            sum+=x;
            best=max(sum,best);
            if(sum<0)   sum=0;
        }
        return best;
    }
    int maxSubArray(vector<int>& nums) {
        return kadane(nums);
        // // int csum=0;
        // // int maxi=INT_MIN;
        // // for(int i=0;i<nums.size();i++){
        // //     csum+=nums[i];
        // //     maxi=max(maxi,csum);
        // //     if(csum<0)  csum=0;
        // // }
        // // return maxi;
        // int n=nums.size(),best=INT_MIN;
        // vector<int>dp(n,INT_MIN);
        // for(int i=0;i<n;i++){
        //     best=max(best,memo(i,nums,dp));
        // }
        // return best;
    }
};