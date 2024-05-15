// Statement:
// Given an Array of integers, numbers, and target, find the indices of the two elements from numbers 
//array such that they add up to target

// Assumption: Only one solution exists on positive case
// Restriction: Do not use the same element twice

// Example Input/Output

// Input : numbers=[2,7,11,15,18],  target = 17
// Output: [0,3]

// Input: numbers = [3,2,4], target=10
// Output: [-1,-1]



#include <iostream>
#include <vector>
#include<unordered_map>

using namespace std;

vector<int> twoElements(vector<int> &nums, int target) {
       unordered_map <int, int> mp;
       int val = 0;

       for(int i = 0; i < nums.size();i++) {
        val = target - nums[i];
        auto itr = mp.find(val);

        if(itr != mp.end()) {
          return { itr->second, i};
        }

        mp.insert(make_pair(nums[i], i));

       }
        return {-1,-1};
    }

int main() {

  vector<int> nums1 = {2, 7, 11, 15};
  int target1 = 9;
  vector<int> result1 = twoElements(nums1, target1);
  cout << "Test 1: ";
  if (result1.size() == 2 && result1[0] == 0 && result1[1] == 1) {
    cout << "Passed" << endl;
  } else {
    cout << "Failed: " << endl;
  }
  vector<int> nums2 = {3, 2, 4};
  int target2 = 6;
  vector<int> result2 = twoElements(nums2, target2);
  cout << "Test 2: ";
  if (result2.size() == 2 && result2[0] == 1 && result2[1] == 2) {
    cout << "Passed" << endl;
  } else {
    cout << "Failed" << endl;
  }

  vector<int> nums3 = {1, 0, 2,10};
  int target3 = 0;
  vector<int> result3 = twoElements(nums3, target3);
  cout << "Test 3: ";
  if (result3.size() == 2 && result3[0] == -1 && result3[1] == -1) {
    cout << "Passed" << endl;
  } else {
    cout << "Failed" << endl;
  }

  return 0;
}