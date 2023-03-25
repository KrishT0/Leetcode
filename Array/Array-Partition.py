

class Solution:
    def arrayPairSum(self, nums:list[int]) -> int:
        nums.sort()
        sum_ = 0
        for i in range(0,len(nums),2):
            sum_ += nums[i]
        return sum_

    
s=Solution()
print(s.arrayPairSum([2,7,1,9,4,6]))