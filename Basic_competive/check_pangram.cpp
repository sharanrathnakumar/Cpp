#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

bool isPangram( std::string str)
{
	std::string alphabet{"abcdefghijklmnopqrstuvwxyz"};
	std::transform(str.begin(), str.end(), str.begin(), ::tolower);

	for(char ch : alphabet)
	{
		if(str.find(ch) ==std::string::npos) {
			return false;
		}
	}
	return true;
}

int main()
{
	std::string str;
	std::cout << "Enter a string: "; std::cin >> str;

	isPangram(str) ? std::cout << "The string is panagram" << std::endl : std::cout << "string is not a pangram" << std::endl;
	return 0;
}
