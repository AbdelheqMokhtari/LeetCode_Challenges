def maximumCount(self, nums: List[int]) -> int:
        pos = 0
        neg = 0
        for i in range(len(nums)):
            if nums[i] < 0:
                neg = neg + 1
            elif nums[i] > 0:
                pos = pos + 1
        
        if pos > neg:
            return pos
        return neg