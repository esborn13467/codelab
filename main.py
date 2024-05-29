# my_arr=[10,9,7,2,1]
# target=10
# def my_sum(my_arr,target):
#     if arr[0]+arr[1]==target: return arr[0] and arr[1]
#     else: return my_sum(my_arr,target)
#
def find_pair_with_sum(arr, target):
    n = len(arr)

    for i in range(n):
        for j in range(i + 1, n):
            if arr[i] + arr[j] == target:
                return arr[i], arr[j]

    return None


# Example usage
arr = [9, 7, 3, 2, 1]
target = 11
result = find_pair_with_sum(arr, target)

if result:
    print(f"Numbers found: {result[0]} and {result[1]}")
else:
    print("No pair found that adds up to the target.")
#time complexity for 1loop is O(n)
