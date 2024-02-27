#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maximumScore(int a, int b, int c) {
    vector<int> stones = {a, b, c};
    sort(stones.begin(), stones.end(), greater<int>());
    
    int score = 0;
    while (stones[1] > 0) {
        stones[0]--;
        stones[1]--;
        sort(stones.begin(), stones.end(), greater<int>());
        score++;
    }
    
    return score;
}

int main() {
    int a = 2, b = 4, c = 6;
    int result = maximumScore(a, b, c);
    cout << "Maximum score: " << result << endl;

    return 0;
}

