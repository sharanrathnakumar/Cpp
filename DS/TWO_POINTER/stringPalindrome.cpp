#include<iostream>

bool isPalindrome( std::string &s) {
	int front = 0, back = s.size()-1;

	while(front < back) {
		if(s[front] != s[back])
			return false;
		front++;
		back--;
	}
	return true;
}

int main() {
	std::string input;

	std::cout << "Enter the string:"; std::cin >> input;
	std::cout << "The string is " << (isPalindrome(input) ? "palindrome" : "not palindrome") << std::endl;
	
	return 0;
}
