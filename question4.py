def find_duplicates(nums):
    counts = {}
    duplicates = []

    for num in nums:
        if num in counts:
            counts[num] += 1
        else:
            counts[num] = 1

    for num, count in counts.items():
        if count == 2:
            duplicates.append(num)

    return duplicates

# Example usage:
nums = [4, 3, 2, 7, 8, 2, 3, 1]
result = find_duplicates(nums)

print(result)
