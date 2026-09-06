class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int,int>> v;              // {value, original index}
        for (int k = 0; k < n; k++) v.push_back({nums[k], k});
        sort(v.begin(), v.end());
        int i = 0, j = n - 1;
        while (i < j) {
            int s = v[i].first + v[j].first;
            if (s == target) return {v[i].second, v[j].second};
            if (s < target) i++;
            else j--;
        }
        return {};
    }
};