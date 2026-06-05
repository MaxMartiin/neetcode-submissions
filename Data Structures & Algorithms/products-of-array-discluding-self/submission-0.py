class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        output = []
        prod = 1
        zero_count = nums.count(0)
        if zero_count > 1:
            return [0] * len(nums)
        for n in nums:
            if n != 0:
                prod *= n
        for n in nums:
            if zero_count == 1:
                output.append(prod if n == 0 else 0)
            else:
                output.append(int(prod / n))
        return output