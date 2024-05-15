#include<iostream>
#include<vector>
#include<algorithm>


int find2ndLargest( std::vector<int> &v)
{
	std::sort(v.begin(), v.end(), std::greater<int>());

	return v.at(1);
}

int main()
{
	std::vector<int> vector;
	int limit = 0;
	std::cout << "Enter the limit for the vector: "; std::cin >> limit;

	std::cout << "Enter values: ";
	
	while(limit--)
	{
		int tmp;
		std::cin >> tmp;
		vector.push_back(tmp);
	}

	std::cout << "The second largest is : " << find2ndLargest(vector) << std::endl;

	return 0;
}
