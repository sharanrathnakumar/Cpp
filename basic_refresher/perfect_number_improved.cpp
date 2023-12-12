#include <iostream>

bool isNumPerfect( int number )
{
	int sum =0;
	if(number <= 0)
		return false;

	for(int i =1; i <= number/2; i++)
	{
		if(number % i == 0)
		{
			sum += i;
		}
	}
	
	return number == sum;
}



int main()
{
	int num = 0;
	std::cout << "Enter a number: " << std::endl;
	std::cin >> num;

	if(isNumPerfect(num))
	{
		std::cout << "The entered number is perfect" << std::endl;
	} else {
		std::cout << "The entered number is not perfect" << std::endl;
	}
}
