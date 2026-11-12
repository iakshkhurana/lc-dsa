class Solution(object):
    def runningSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        arr=[nums[0]]
        for i in range(1,len(nums)):
            arr.append(arr[i-1]+nums[i])
        return arr