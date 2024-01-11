#include<iostream>
#include<vector>
#include<limits>

class Solution {
public:
    void sortColors(std::vector<int>& nums) {
        int low =0, mid =0, high = nums.size()-1;

        while( mid <= high)
        {
            if(nums[mid] == 0)
            {
                std::swap(nums[low], nums[mid]);
                low++;
                mid++;
            } else if (nums[mid] == 2)
            {
                std::swap(nums[mid],nums[high]);
                high--;
            } else {
                mid++;
            }
        }
    }
};

int main()
{
	std::vector<int> vector;
	int num;
	std::cout << "Enter colors [0,1,2]: " << std::endl;
	
	while(true)
	{
		if(std::cin.peek() == '\n')
			break;

		if(std::cin >> num && (num == 1 || num == 2 || num == 0))
		{
			vector.push_back(num);
		} else {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid input. Please enter 0,1 or 2." << std::endl;
		}
	}

	Solution s1;
	s1.sortColors(vector);
	
	std::cout << "After sorting: ";
	for(int &value : vector)
	{
		std::cout << value << " ";
	}
	std::cout << std::endl;
	return 0;

}
