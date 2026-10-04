class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for (auto it : nums) mpp[it]++;
        // mpp -> 1:2 ; 2:1 ; 3:3

        vector<int> ans;
        while (!mpp.empty()) {
            vector<int> temp;                       // is round ke uniques
            for (auto it = mpp.begin(); it != mpp.end(); ) {
                temp.push_back(it->first);
                it->second -= 1;
                if (it->second == 0) it = mpp.erase(it);   // safe erase
                else ++it;
            }
            sort(temp.begin(), temp.end());         // sirf is round ko sort
            for (int x : temp) ans.push_back(x);
            // round 1 ke baad: mpp -> 1:1 ; 3:2 , ans = [1,2,3]
        }
        return ans;
    }
};