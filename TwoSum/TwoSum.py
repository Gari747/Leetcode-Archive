class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        n = len(nums)
        for i in range(n):
            curr = target - nums[i]
            if curr in nums:
                ind = nums.index(curr)
                if ind != i:
                    return [ind,i]
                

def main():
    sol = Solution()
    print(sol.twoSum([3,2,6],9))

if __name__=='__main__':
    main()