def permute(nums):
    """
    :type nums: List[int]
    :rtype: List[List[int]]
    """
    if len(nums) == 1:
        return [nums[:]]
    res = []
    for _ in range(len(nums)):
        n = nums.pop(0)
        perms = permute(nums)
        for perm in perms:
            perm.append(n)
        res.extend(perms)
        nums.append(n)
    return res


print(permute([1, 2, 3]))
