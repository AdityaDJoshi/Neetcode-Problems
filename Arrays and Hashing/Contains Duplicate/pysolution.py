#     _       _ _ _                     _           _     _
#    / \   __| (_) |_ _   _  __ _      | | ___  ___| |__ (_)
#   / _ \ / _` | | __| | | |/ _` |  _  | |/ _ \/ __| '_ \| |
#  / ___ \ (_| | | |_| |_| | (_| | | |_| | (_) \__ \ | | | |
# /_/   \_\__,_|_|\__|\__, |\__,_|  \___/ \___/|___/_| |_|_|
#                     |___/
class Solution:
    def containsDuplicate(self, nums: list[int]) -> bool:
        approach = 2
        if approach == 0:
            for i in range(len(nums)-1):
                if sorted(nums)[i] == sorted(nums)[i+1]:
                    return True
            return False
        elif approach == 1:
            # Doesnt work for very large inputs
            d = {}
            for i in nums:
                if i in d:
                    return True
                else:
                    d[i] = True
            return False
        elif approach == 2:
            d = set()
            for i in nums:
                if i in d:
                    return True
                else:
                    d.add(i)
            return False
        elif approach == 3:
            return len(nums) > len(set(nums))


if __name__ == "__main__":
    a = Solution()
    print(a.containsDuplicate([1, 2, 4, 3]))
