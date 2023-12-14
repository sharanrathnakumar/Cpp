#include<iostream>

enum Parity { odd, even };

Parity checkParity(int num)
{
	int counter =0;

    for( ; num != 0; num >>= 1)
	{
		if( num & 1 )
			counter++;

	}

	std::cout << "Set Bit : " << counter << std::endl;

	return (counter & 1) ? odd : even;
}

int main()
{
	int num = 0;
	std::cout << "Enter the number: ";
	std::cin >> num;

	if( checkParity(num) == odd )
	{
		std::cout << "Odd Parity" << std::endl;
	} else {
		std::cout << "Even Parity" << std::endl;
	}
} 
