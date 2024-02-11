#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

int distributeCandies(vector<int>& candyType) {
    unordered_set<int> types;
    for (int type : candyType) {
        types.insert(type);
    }
    
    int maxCandiesForSister = min(types.size(), candyType.size() / 2);
    return maxCandiesForSister;
}

int main() {
    vector<int> candyType = {1, 1, 2, 2, 3, 3};
    cout << "Maximum number of different types of candies sister can get: " << distributeCandies(candyType) << endl;

    return 0;
}

