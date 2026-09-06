class Solution {
public:
    void sortColors(vector<int>& nums) {
        // i j k (j move krega)
        int i=0, j=0, k=nums.size()-1;
        // i ko 0 denge; j ko 1 denge; k ko 2 denge
        while(j<=k){
            if(nums[j]==0){
                swap(nums[i],nums[j]);
                j++;
                i++;
            }
            else if(nums[j]==1){
                // all cool
                j++;
            }
            else{
                // 2 aagya
                swap(nums[j],nums[k]);
                k--;
            }
        }
    }
};