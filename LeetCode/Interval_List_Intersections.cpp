#include<iostream>
#include<vector>

class Solution {
public:
	std::vector<std::vector<int>> intervalIntersection(std::vector<std::vector<int>>& firstList, std::vector<std::vector<int>>& secondList) {
       std::vector<std::vector<int>> result;

    int i = 0, j = 0;

    while (i < firstList.size() && j < secondList.size()) {
        int startA = firstList[i][0], endA = firstList[i][1];
        int startB = secondList[j][0], endB = secondList[j][1];

        if (endA >= startB && endB >= startA) {
            int startIntersect = std::max(startA, startB);
            int endIntersect = std::min(endA, endB);

            result.push_back({startIntersect, endIntersect});
        }

        if (endA < endB) {
            ++i;
        } else {
            ++j;
        }
    }

    return result;   
    }
};

int main()
{
	std::vector<std::vector<int>> A = {{0, 2}, {5, 10}, {13, 23}, {24, 25}};
    std::vector<std::vector<int>> B = {{1, 5}, {8, 12}, {15, 24}, {25, 26}};

	Solution S1;

    std::vector<std::vector<int>> result = S1.intervalIntersection(A, B);

    std::cout << "Intersection of Interval Lists:" << std::endl;
    for (const auto& interval : result) {
        std::cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }
    std::cout << std::endl;

    return 0;
}
