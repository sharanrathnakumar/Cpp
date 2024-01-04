#include<iostream>

std::string isPalindrome( int num )
{
	int rev = 0, tmp = num;

	while(tmp != 0)
	{
		rev *= 10;
		rev+= (tmp % 10);
		tmp /= 10;
	}

	return (num == rev) ? "Palindrome" : "not palindrome";
}

int main()
{
	int num;

	std::cout << "Enter the number: "; std::cin >> num;

	std::cout << "The number is " << isPalindrome(num) << std::endl;
	return 0;
}
