import re

def is_palindrome(s):
    # Normalize the input string

    s = s.lower()  # Convert to lowercase
    s = re.sub(r'[^a-z0-9]', '', s)  # Remove non-alphanumeric characters
    if s == s[::-1]:# Check if the normalized string is equal to its reverse
        print("Palindrome")
    else:
        print("Not Palindrome")

# Get input from user
s = input("Enter a string: ")
is_palindrome(s)


