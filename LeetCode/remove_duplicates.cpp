//Remove Duplicates from Sorted Array II

#include<iostream>
#include<vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int index = 1;
        int count =1;

        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] == nums[i-1])
            {
                count++;
            } else {
                count = 1;
            }

            if(count <= 2)
            {
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }
};

int main()
{
	int size = 0;
	std::vector<int>vector;
	Solution s1;

	std::cout << "Enter the size of the vector: "; std::cin >> size;
	std::cout << "Enter the values for the vector : ";

	for(int i =0; i < size; i++)
	{
		int tmp;
		std::cin >> tmp;
		vector.push_back(tmp);
	}

	std::cout << "Array after sorting " << std::endl;
	size = s1.removeDuplicates(vector);

	for(int i =0; i < size; i++)
	{
		std::cout << vector.at(i) << " ";
	}
	std::cout << std::endl;

	return 0;

}
