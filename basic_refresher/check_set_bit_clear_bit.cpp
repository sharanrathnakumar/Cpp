#include<iostream>

bool isNthBitSet(int num, int nPOs)
{
	int mask = 1;
    mask <<= nPOs;
    
	return (num & mask) ? true : false;
}

int main()
{
	int num, N, M;
	std::cout << "Enter the number: "; std::cin >> num;
	std::cout << "Enter N: "; std::cin >> N;
	std::cout << "Enter M: "; std::cin >> M;

	
   num = isNthBitSet(num, N) ? num& ~(1 << M) : num;

   std::cout << "Updated value: " << num << std::endl;
}
