from collections import Counter

class Solution(object):
    def numJewelsInStones(self, jewels, stones):
        count = Counter(stones)
        total = 0
        for j in jewels:
            total += count[j]
        return total