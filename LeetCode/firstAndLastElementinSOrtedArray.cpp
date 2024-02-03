#include<iostream>
#include<vector>

class Solution {
public:
	std::vector<int> searchRange(std::vector<int>& nums, int target) {
        std::vector<int> position(2,-1);

        bool first = true;

        if(nums.size() == 0)
        return position;

        for(int i =0; i < nums.size(); i++)
        {
            if(nums[i] == target && first) {
                position[0] = i;
                position[1] = i;
                first = false;
            } else if (nums[i] == target) {
                position[1] = i;
            }
        }
        return position;
    }
};


int main()
{
	int size =0, target;
	std::vector<int> array, vector(2);

	std::cout << "Enter the size of the array: "; std::cin >> size;

	std::cout << "Enter the elements: ";

	for(int i =0; i<size; i++) {
		int tmp;
		std::cin >> tmp;
		array.push_back(tmp);
	}

	std::cout << "Enter the target: "; std::cin >> target;
	Solution S1;
	vector = S1.searchRange(array, target);

	std::cout << "The positions are : [" << vector[0] << "," <<  vector[1] << "]" << std::endl;
	return 0;

}
