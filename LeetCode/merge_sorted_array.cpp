#include<iostream>
#include<vector>
#include<algorithm>

class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        int index = m;
        for(int i=0; i < n; i++)
        {
            nums1.push_back(nums2[i]);
        }

        std::sort(nums1.begin(), nums1.begin()+m+n);

	std::cout << "After merge: " << std::endl;

	for(int &value: nums1)
	{
		std::cout << value << " ";
	}

	std::cout << std::endl;
    }
};


int main()
{
	int size1=0, size2=0, tmp=0;
	std::vector<int> v1, v2;

	std::cout << "Enter the size of the vector1 and vector2: "; std::cin >> size1 >> size2;
	std::cout << "Enter vector1 values: ";

	for(int i =0; i < size1; i++)
	{
		std::cin >> tmp;
		v1.push_back(tmp);
	}

	std::cout << "Enter vector2 values: ";

	for(int i =0; i < size2; i++)
	{
		std::cin >> tmp;
		v2.push_back(tmp);
	}

	Solution S1;
	S1.merge(v1, size1, v2, size2);
	
	return 0;
}
