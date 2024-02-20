#include <iostream>
#include <queue>
#include <vector>


class KthLargest {
private:
	std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;
    int k;
    
public:
    KthLargest(int k, std::vector<int>& nums) {
        this->k = k;
        for (int num : nums) {
            add(num);
        }
    }
    
    int add(int val) {
        if (minHeap.size() < k) {
            minHeap.push(val);
        } else if (val > minHeap.top()) {
            minHeap.pop();
            minHeap.push(val);
        }
        return minHeap.top();
    }
};

int main() {
    
	std::vector<int> nums = {4, 5, 8, 2};
    int k = 3;
    KthLargest kthLargest(k, nums);
	std::cout << "Kth largest element: " << kthLargest.add(3) << std::endl;   // Returns 4
	std::cout << "Kth largest element: " << kthLargest.add(5) << std::endl;   // Returns 5
	std::cout << "Kth largest element: " << kthLargest.add(10) << std::endl;  // Returns 5
	std::cout << "Kth largest element: " << kthLargest.add(9) << std::endl;   // Returns 8
	std::cout << "Kth largest element: " << kthLargest.add(4) << std::endl;   // Returns 8
    
    return 0;
}

