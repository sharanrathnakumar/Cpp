//WAP to check if number is perfect or not

#include<iostream>

int main()
{
	int num = 0;
	std::cout << "Enter a number : " << std::endl;
	std::cin >> num;

	if( num <= 0)
	{
		std::cout << "The num " << num << " is not a perfect number." << std::endl;
	} else {
		int numSum = 0;

		for(int i = 1; i <= num ; i++)
		{
			if( num % i == 0)
			{
				numSum += i;
			}
		}

		if( numSum / 2 == num )
		{
			std::cout << "The num " << num << " is a perfect number" << std::endl;
		} else {
       		std::cout << "The num " << num << " is not a perfect number." << std::endl;
		}
	}

	return 0;
}
