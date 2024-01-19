#include<iostream>
#include<vector>

class Solution {
public:
    int findMin(std::vector<int>& nums) {
        int start =0, end = nums.size()-1;

        while( start < end )
        {
            int mid = start + (end - start)/2;

            if( nums[mid] > nums[end])
            {
                start = mid +1;
            } else {
                end = mid;
            }
        }
        return nums[start];
    }
};

int main()
{
	int size;
	std::vector<int> vector;
	Solution S1;

	std::cout << "Enter the size of the array: "; std::cin >> size;
	std::cout << "Enter your elements: " << std::endl;

	for(int i =0; i < size; i++)
	{
		int value;
		std::cin >> value;
		vector.push_back(value);
	}

	std::cout << "The minimum value is: " << S1.findMin(vector) << std::endl;

	return 0;
}
