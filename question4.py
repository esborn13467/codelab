def find_duplicates(nums):
    duplicates = []
    seen = set()
    for num in nums:
        if num in seen:
            duplicates.append(num)
        else:
            seen.add(num)
    return duplicates

# Example usage
nums = [4, 3, 2, 7, 8, 2, 3, 1]
print(find_duplicates(nums))  # Output: [2, 3]
