# write a program to check if a given string is a pangram or not
# Input:  "The quick brown fox jumps over the lazy dog"
# Output: "This is a pangram"

def is_pangram(string):
    """ 
    Check if a string is a pangram
    """
    string = string.lower()
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    for char in alphabet:
        if char not in string:
            return False
    return True
