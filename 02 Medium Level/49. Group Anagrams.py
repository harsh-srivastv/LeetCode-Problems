# https://leetcode.com/problems/group-anagrams/

class Solution:
    def groupAnagrams(self, strs: list[str]) -> list[list[str]]:
        dictionary = {}
        for word in strs:
            sortedWord = ''.join(sorted(word))
            # If word is not in dictionary
            if sortedWord not in dictionary:
                dictionary[sortedWord] = [word]
            # If previously it is present that means its anagram
            # was previously present
            else:
                dictionary[sortedWord] += [word]
        return [dictionary[i] for i in dictionary]