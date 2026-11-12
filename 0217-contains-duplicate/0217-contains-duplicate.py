# from collections import Counter
class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        # count=Counter(nums)
        # # dict ban gya
        # for i in count:
        #     if count[i]>1:
        #         return True
        # return False
        seen=set()
        for n in nums:
            if n in seen:
                return True
            seen.add(n)
        return False