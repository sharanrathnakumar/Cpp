#include<iostream>

void printSubstrings( std::string str)
{
	for(int i=0; i < str.length(); i++)
	{
		for(int len=1; len <= str.length() -i; len++)
		{
			std::cout << str.substr(i,len) << std::endl;
		}
	}
}

int main()
{
	std::string str;

	std::cout << "Enter a string: "; std::cin >> str;
	printSubstrings(str);

	return 0;
}
