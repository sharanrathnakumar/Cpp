#include <iostream>
#include <unordered_set>

int lengthOfLongestSubstring(std::string s) {
    int n = s.length();
    int maxLength = 0;
    int left = 0, right = 0;
    std::unordered_set<char> seen;

    while (right < n) {
        char currentChar = s[right];
        if (seen.find(currentChar) == seen.end()) {
            seen.insert(currentChar);
            maxLength = std::max(maxLength, right - left + 1);
            ++right;
        } else {
            char leftChar = s[left];
            seen.erase(leftChar);
            ++left;
        }
    }

    return maxLength;
}

int main() {
    std::string input = "abcabcbb";
    int longestLength = lengthOfLongestSubstring(input);
    std::cout << "Length of the longest substring without repeating characters: " << longestLength << std::endl;
    return 0;
}

