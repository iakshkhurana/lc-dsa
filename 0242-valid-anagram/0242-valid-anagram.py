class Solution(object):
    def isAnagram(self, s, t):
        if len(s) != len(t):
            return False
        count1, count2 = Counter(s), Counter(t)
        for ch in count1:
            if count1[ch] != count2[ch]:
                return False
        return True