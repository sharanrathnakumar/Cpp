#include <iostream>
#include <vector>
#include <string>

std::string longestCommonPrefix(std::vector<std::string>& strs) {
    if (strs.empty()) return "";
    
    std::string prefix = strs[0];
    
    for (int i = 1; i < strs.size(); ++i) {
        int j = 0;
        while (j < prefix.size() && j < strs[i].size() && prefix[j] == strs[i][j]) {
            ++j;
        }
        prefix = prefix.substr(0, j);
        if (prefix.empty()) break;
    }
    
    return prefix;
}

int main() {
    std::vector<std::string> strs = {"flower", "flow", "flight"};
    std::cout << "Longest common prefix: " << longestCommonPrefix(strs) << std::endl; // Output: "fl"
    return 0;
}

