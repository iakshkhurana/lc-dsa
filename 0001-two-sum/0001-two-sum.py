class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """

        a_dict={}

        for i in range(len(nums)):
            if target-nums[i] in a_dict:
                return [a_dict[target-nums[i]],i]
            else:
                a_dict[nums[i]]=i


       