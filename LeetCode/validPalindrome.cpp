#include<iostream>
#include<string>
#include <bits/stdc++.h>

class Solution {
public:
    bool isPalindrome(std::string s) {
		std::string lowercase = "";

        for (char ch : s ) {
            if (std::isupper(ch)) {
                lowercase+= std::tolower(ch);
            } else if ( std::islower(ch)) {
                lowercase += ch;
            } else if (ch >= '0' && ch <= '9') {
                lowercase += ch;
            }
        }

		std::string rev = lowercase;
		reverse(rev.begin(), rev.end());

        return rev == lowercase;
    }
};



int main()
{
	std::string str = "";

	std::cout << "Enter the string: "; std::cin >> str;

	Solution S1;
	if (S1.isPalindrome(str)) {
		std::cout << "The string is palindrome" << std::endl;
	} else {
		std::cout << "The string is not palindrome" << std::endl;
	}

	return 0;
}
