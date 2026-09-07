class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX; // min price
        int maxi=0; // max profit
        for(int i=0;i<prices.size();i++){
            mini=min(mini,prices[i]);
            maxi=max(maxi,prices[i]-mini);
        }
        return maxi;
        // loop me last cheez dekhlega woh
    }
};