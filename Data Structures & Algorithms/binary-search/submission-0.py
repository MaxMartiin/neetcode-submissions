class Solution:
    def search(self, nums: List[int], target: int) -> int:
        upper_bounds = len(nums)-1
        lower_bounds = 0
        while lower_bounds <= upper_bounds:
            mid = (upper_bounds + lower_bounds) // 2
            if nums[mid] > target:
                upper_bounds = mid - 1
            elif nums[mid] < target:
                lower_bounds = mid + 1
            else:
                return mid
        return -1